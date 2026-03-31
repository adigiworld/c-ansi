#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

const char *DEFAULT_FILE = "index.html";

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

void print_file(const char *path)
{
  int fd = open(path, O_RDONLY);
  if (fd < 0)
  {
    perror("Error opening file");
    return;
  }

  struct stat metadata;
  if (fstat(fd, &metadata) == -1)
  {
    perror("Error getting file metadata");
    close(fd);
    return;
  }

  char *buf = malloc(metadata.st_size + 1);
  if (buf == NULL)
  {
    perror("Error allocating buffer");
    close(fd);
    return;
  }

  ssize_t bytes_read = read(fd, buf, metadata.st_size);
  if (bytes_read < 0)
  {
    perror("Error reading file");
    free(buf);
    close(fd);
    return;
  }
  buf[bytes_read] = '\0';
  printf("Contents: %s", buf);

  free(buf);
  close(fd);
}

int main()
{
  char req1[] = "GET / HTTP/1.1\nHost: example.com";
  print_file(to_path(req1));

  char req2[] = "GET /blog HTTP/1.1\nHost: example.com";
  print_file(to_path(req2));

  return 0;
}
