#include <stdio.h>
#include <math.h>
#define MIN 0
#define MAX 100
#define STEP 10

int main(void)
{
  int number = MIN;
  printf("Number\tSquare-root\tSquare\n");
  while (number <= MAX)
  {
    printf("%d \t%1.5lf \t%d\n", number, sqrt(number), number*number);
    number += STEP;
  }

  return 0;
}