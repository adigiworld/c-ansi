#include<stdio.h>

int factorial(int);
int main(void){
  int num;
  printf("Enter a number to calculate FACTORIAL of that number : ");
  scanf("%d",&num);
  printf("The FACTORIAL of number %d is %d\n",num,factorial(num));

  return 0;
}

int factorial(int n){
  if(n<=1){return 1;}
  return n*factorial(n-1);
}