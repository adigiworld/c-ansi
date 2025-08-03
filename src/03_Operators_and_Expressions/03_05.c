#include <stdio.h>

/*------------Sum of n terms of 1/n----------------*/
int main(void){
  float sum, n, term;
  int count = 1;
  sum = 0;
  printf("Enter value of n\n");
  scanf("%f", &n);
  term = 1 / n;
  while (count <= n)  {
    sum += term;
    count += 1;
  }
  printf("Sum = %f\n", sum);
  return 0;
}