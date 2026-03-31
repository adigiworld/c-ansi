#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(){
    char *header = "HTTP/1.1 200 OK";
    write(1,header,15);
    // write(1,header,strlen(header));
    // printf("Header: %s\n",header);
    printf("\nHeader Address: %p\n",header);

    return 0;
}
