#include<stdio.h>

int factorial(int);

int main(void){
  int n=2;
  float last,current,e;
  e=2;
  current=2;
  last=2;
  do{
    last=current;
    current=(float)(1.0/factorial(n));
    // printf("%f\n",current);
    e=e+current;
    n+=1;
  }while((last-current)>0.00001);

  printf("Euler's number e : %f\n",e);

  return 0;
}

int factorial(int n){
  if(n<=1){
    return 1;
  }
  return n*factorial(n-1);
}