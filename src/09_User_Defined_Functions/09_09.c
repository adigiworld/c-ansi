#include<stdio.h>

void stat(void);

int main(void){
  int i;
  for(i=0;i<3;i+=1){
    stat();
  }

  return 0;
}

void stat(void){
  static int x=0;
  x+=1;
  printf("x = %d\n",x);
}