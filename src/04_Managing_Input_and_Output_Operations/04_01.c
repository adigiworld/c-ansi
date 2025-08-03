#include<stdio.h>

int main(void){
  char answer;
  printf("Would you like to know my name?\n");
  printf("Type Y for YES and N for NO: ");
  answer=getchar();
  if(answer=='Y'||answer=='y'){
    printf("\n\nMy name is BUSY BEE\n");
  }else{
    printf("You are good for nothing\n");
  }
  return 0;
}