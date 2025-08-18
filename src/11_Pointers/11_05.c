#include<stdio.h>

int main(void){
  char *name;
  int length;
  char *cptr;
  name="DELHI";
  cptr=name;
  // printf("%s %u\n",name,name);
  // printf("%s %u\n",cptr,cptr);
  printf("%s\n",name);
  while(*cptr!='\0'){
    // printf("%c is stored at address %u\n",*cptr,cptr);
    printf("%c is stored at address %p\n",*cptr,cptr);
    cptr+=1;
  }
  length=cptr-name;
  printf("\nLength of the string = %d\n",length);

  return 0;
}