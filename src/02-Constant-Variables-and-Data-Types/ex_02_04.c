#include <stdio.h>

int main(void){
  float first,second;
  printf("Enter two float number to division\n");
  scanf("%f %f",&first,&second);
  printf("Division of first number %f by second number %f is %f\n",first,second,(first/second));
  return 0;
}