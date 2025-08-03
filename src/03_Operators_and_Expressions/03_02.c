#include<stdio.h>
#define N 100
#define A 2

int main(void){
  int a;
  a=A;
  while (a<N)
  {
    printf("%d\n",a);
    a*=a;
  }
  
  return 0;
}