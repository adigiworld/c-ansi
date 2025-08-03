#include <stdio.h>

int main(void){
  float a, b, c, x, y, z;
  a = 9;
  b = 12;
  c = 3;
  x = a - b / 3 + c * 2 - 1;     // 10
  y = a - b / (3 + c) * (2 - 1); // 7
  z = a - (b / (3 + c) * 2) - 1; // 4
  printf("x = %f\n", x);
  printf("y = %f\n", y);
  printf("z = %f\n", z);
  return 0;
}