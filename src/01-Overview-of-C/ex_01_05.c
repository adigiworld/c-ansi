#include <stdio.h>
#define PI 3.1417

float area_of_circle(float);

int main(void){
  int radius = 5;
  float area = area_of_circle(radius);
  printf("Area of circle with radius %d is %f\n", radius, area);
  return 0;
}

float area_of_circle(float radius){
  return (PI * radius * radius);
}