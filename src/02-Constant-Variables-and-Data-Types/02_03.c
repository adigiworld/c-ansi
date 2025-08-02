#include <stdio.h>

int main(void){
  int number;
  printf("Enter an integer number\n");
  scanf("%d", &number);
  if (number < 100)  {
    printf("Your number is smaller than 100\n\n");
  } else {
    printf("Your number contains more than two digits\n\n");
  }
  return 0;
}