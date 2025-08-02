#include <stdio.h>

void compute(int, int, int);

int main(void){
  compute(250, 85, 25);
  compute(300, 70, 70);
  return 0;
}

void compute(int a, int b, int c){
  if ((b - c) == 0)  {
    printf("We can not devid a number by zero\n");
    return;
  }
  float x = a / (b - c);
  printf("For a = %d, b = %d, c = %d, the X is %f\n", a, b, c, x);
}