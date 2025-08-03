#include <stdio.h>
#include <math.h>

float largest(float, float, float);

int main(void){
  float a, b, c, max;
  printf("Enter the three number\n");
  scanf("%f %f %f", &a, &b, &c);
  // largest = ((a > b && a > c) ? a : (b > c ? b : c));
  max = largest(a, b, c);
  printf("%f\n", max);

  return 0;
}

float largest(float a, float b, float c){
  return ((a > b && a > c) ? a : (b > c ? b : c));
}