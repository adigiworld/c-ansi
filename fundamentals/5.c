#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <errno.h>

const int PORT = 8080;
const int MAX_REQUEST_BYTES = 32768;
const char *DEFAULT_FILE = "index.html";

const char *HTTP_400 = "HTTP/1.1 400 Bad Request\n\n";
const char *HTTP_404 = "HTTP/1.1 404 Not Found\n\n";
const char *HTTP_500 = "HTTP/1.1 500 Internal Server Error\n\n";
const char *HTTP_413 = "HTTP/1.1 413 Content Too Large\n\n";
const char *HTTP_200 = "HTTP/1.1 200 OK\n\n";

char *to_path(char *req)
{
  char *start, *end;
  // Advance start to first ' '
  for (start = req; start[0] != ' '; start += 1)
  {
    if (*start == '\0')
    {
      return NULL;
    }
  }
  start += 1;
  start += 1; // Remove '/' from front of blog
  // Advance end to second ' '
  for (end = start; end[0] != ' '; end += 1)
  {
    if (*end == '\0')
    {
      return NULL;
    }
  }
  if (end[-1] == '/')
  {
    end -= 1;
  }
  else
  {
    end[0] = '/';
  }

  if ((size_t)end + strlen(DEFAULT_FILE) + 1 > (size_t)req + strlen(req))
  {
    return NULL;
  }
  memcpy(end + 1, DEFAULT_FILE, strlen(DEFAULT_FILE) + 1);
  return start;
}

int handle_req(char *request, int socket_fd)
{
  char *path = to_path(request);

  if (path == NULL)
  {
    write(socket_fd, HTTP_400, strlen(HTTP_400));
    return -1;
  }

  int fd = open(path, O_RDONLY);

  if (fd == -1)
  {
    if (errno == ENOENT)
    {
      write(socket_fd, HTTP_404, strlen(HTTP_404));
    }
    else
    {
      write(socket_fd, HTTP_500, strlen(HTTP_500));
    }

    return -1;
  }

  struct stat stats;

  if (fstat(fd, &stats) == -1)
  {
    write(socket_fd, HTTP_500, strlen(HTTP_500));
    return -1;
  }

  // Write the header to the socket ("HTTP/1.1 200 OK")
  {
    const char *OK = "HTTP/1.1 200 OK\n\n";
    size_t bytes_written = 0;
    size_t bytes_to_write = strlen(OK);

    while (bytes_to_write)
    {
      bytes_written = write(socket_fd, OK + bytes_written, bytes_to_write);

      if (bytes_written == -1)
      {
        write(socket_fd, HTTP_500, strlen(HTTP_500));
        return -1;
      }

      bytes_to_write -= bytes_written;
    }
  }

  {
    // Read from the file and write to the socket
    char buffer[4096]; // Buffer for reading file data
    ssize_t bytes_read;

    // Loop until we've read the entire file
    while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
    {
      ssize_t bytes_written = 0;
      ssize_t bytes_remaining = bytes_read;

      // Ensure all bytes are written to the socket
      while (bytes_remaining > 0)
      {
        ssize_t result = write(socket_fd, buffer + bytes_written, bytes_remaining);

        if (result == -1)
        {
          write(socket_fd, HTTP_500, strlen(HTTP_500));
          return -1;
        }

        bytes_written += result;
        bytes_remaining -= result;
      }
    }

    if (bytes_read == -1)
    {
      write(socket_fd, HTTP_500, strlen(HTTP_500));
      return -1;
    }
  }

  close(fd);

  return 0;
}

int main()
{
  int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

  if (socket_fd == -1)
  {
    printf("opening socket failed.\n");
    return -1;
  }

  // Prevent "Address in use" errors when restarting the server
  int opt = 1;
  if (setsockopt(socket_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) == -1)
  {
    printf("setting socket options failed.\n");
    return -1;
  }

  struct sockaddr_in address; // IPv4 address

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(PORT);

  if (bind(socket_fd, (struct sockaddr *)&address, sizeof(address)) == -1)
  {
    printf("bind() failed.\n");
    return -1;
  }

  if (listen(socket_fd, 4) == -1)
  {
    printf("listen() failed.\n");
    return -1;
  }

  printf("Listening on port %d\n", PORT);

  char req[MAX_REQUEST_BYTES + 1]; // + 1 for null terminator
  int addrlen = sizeof(address);

  // Loop forever to keep processing new connections
  while (1)
  {
    // Block until we get a connection on the socket
    int req_socket_fd = accept(socket_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);

    if (req_socket_fd >= 0)
    {
      // Read all the bytes from the socket into the buffer
      ssize_t bytes_read = read(req_socket_fd, req, MAX_REQUEST_BYTES);

      if (bytes_read < MAX_REQUEST_BYTES)
      {
        req[bytes_read] = '\0'; // Null-terminate

        // Parse the URL and method out of the HTTP request
        handle_req(req, req_socket_fd);
      }
      else
      {
        // The request was larger than the maximum size we support!

        write(req_socket_fd, HTTP_413, strlen(HTTP_413));
      }

      close(req_socket_fd);
    }
    else
    {
      // Continue listening for other connections even if accept fails
    }
  }

  return 0;
}
