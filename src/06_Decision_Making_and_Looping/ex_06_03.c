#include<stdio.h>

int main(void){
  long int num,original_num;
  int sum=0;
  printf("Enter a number\n");
  scanf("%ld", &num);
  original_num=num;
  while (num > 0)  {
    sum=sum+num%10;
    num=num/10;
  }
  printf("The sum of digit of the number %ld is %d\n",original_num,sum);

  return 0;
}