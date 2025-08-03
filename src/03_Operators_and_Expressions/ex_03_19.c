#include <stdio.h>
#include<math.h>

int main(void){
  int number;
  printf("Enter the real number\n");
  scanf("%d", &number);
  if((number%2)==0){
    printf("The number %d is a Even number.\n",number);
  }else{
    printf("The number %d is a Odd number.\n",number);
  }

  return 0;
}