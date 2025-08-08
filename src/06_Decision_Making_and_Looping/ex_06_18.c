#include<stdio.h>
#define LIMIT 101

int main(void){
  int num=1;
  while(num<LIMIT){
    if(!(num%2==0||num%3==0)){
      printf("%d\n",num);
    }
    num+=1;
  }

  return 0;
}