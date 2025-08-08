#include<stdio.h>

int main(void){
  long int num;
  printf("Enter a number\n");
  scanf("%ld", &num);

  while (num > 0)  {
    printf("%ld", num % (long int)10);
    num=num/10;
  }
  printf("\n");

  return 0;
}

void revers_digit(int num){
  while (num > 0)  {
    printf("%ld", num % (long int)10);
    num=num/10;
  }
  printf("\n");
}