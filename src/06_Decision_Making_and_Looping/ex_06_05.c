#include<stdio.h>
#include<math.h>

int main(void){
  long int num;
  printf("Enter a number\n");
  scanf("%ld", &num);

  for(num;num>0;num=num/10){
    printf("%ld", num % (long int)10);
  }

  printf("\n");

  return 0;
}