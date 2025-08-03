#include <stdio.h>
#define CALLS 100

int main(void){
  int code;
  float calls, total;
  printf("Enter the customer Code and calls\n");
  scanf("%d %f",&code, &calls);
  if(calls<CALLS){
    total=250;
    printf("The total charge to customer %d for services is %f Rs\n",code,total);
  }else{
    total=250+calls*1.25;
    printf("The total charge to customer %d for services is %f Rs\n",code,total);
  }
  return 0;
}