#include <stdio.h>

int main(void){
  float length, width;
  printf("Enter the length and width of rectangle\n");
  scanf("%f %f", &length, &width);
  printf("Area of rectangle is = %f\n", length * width);
  printf("Perimeter of rectangle is = %f\n", 2 * (length + width));

  return 0;
}