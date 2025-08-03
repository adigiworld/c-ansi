#include<stdio.h>
#include<ctype.h>

int main(void){
  char character;
  printf("Press any key\n");
  character=getchar();
  if(isalpha(character)>0){
    printf("\nThe character is a letter\n");
  }else if(isdigit(character)>0){
    printf("\nThe character is a digit\n");
  }else{
    printf("\nThe character is not alphanumeric\n");    
  }
  return 0;
}