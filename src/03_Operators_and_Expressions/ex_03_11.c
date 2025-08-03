#include <stdio.h>
#include<math.h>

int main(void){
  int number,sum, actual;
  printf("Enter the four digit number\n");
  scanf("%d", &number);
  actual=number;
  sum=0;
  sum+=number/1000;
  number%=1000;
  sum+=number/100;
  number%=100;
  sum+=number/10;
  number%=10;
  sum+=number/1;
  number%=1;
  printf("Sum of the digit of number %d is %d\n",actual,sum);

  return 0;
}