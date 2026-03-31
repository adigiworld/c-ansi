#include<stdio.h>
#include<string.h>

const char* DEFAULT_FILE = "index.html";

char *to_path(char *req){
    char *start, *end;
    // Advance start to first ' '
    for (start=req; start[0] != ' '; start+=1){
        if (start == '\0'){
            return NULL;
        }
    }
    start+=1;
    start+=1;   // Remove '/' from front of blog
    // Advance end to second ' '
    for (end=start; end[0] != ' '; end+=1){
        if (end == '\0'){
            return NULL;
        }
    }
    if (end[-1]=='/'){
        end-=1;
    }else{
        end[0]='/';
    }

    if ((size_t)end+strlen(DEFAULT_FILE)+1 > (size_t)req+strlen(req)){
        return NULL;
    }
    memcpy(end+1,DEFAULT_FILE,strlen(DEFAULT_FILE)+1);
    return start;
}

int main(){
    char req1[] = "GET /blog HTTP/1.1\nHOST: example.com";
    printf("Should be \"blog/index.html\": \"%s\"\n",to_path(req1));

    char req2[] = "GET /blog/ HTTP/1.1\nHOST: example.com";
    printf("Should be \"blog/index.html\": \"%s\"\n",to_path(req2));

    char req3[] = "GET / HTTP/1.1\nHOST: example.com";
    printf("Should be \"index.html\": \"%s\"\n",to_path(req3));

    char req4[] = "GET /blog ";
    printf("Should be \"(null)\": \"%s\"\n",to_path(req3));

    return 0;
}
