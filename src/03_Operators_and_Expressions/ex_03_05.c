#include <stdio.h>
#include <math.h>

int main(void){
  long int num;
  printf("Enter a number\n");
  scanf("%ld", &num);
  int digit = 0;

  while ((num / (long int)powf(10, digit)) > 0)  {
    digit += 1;
  }

  printf("Number have %d digits\n", digit);

  while (digit > 0)  {
    printf("%ld\n", num % (long int)powf(10, digit));
    digit -= 1;
  }
  
  return 0;
}