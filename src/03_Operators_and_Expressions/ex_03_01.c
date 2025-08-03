#include <stdio.h>

int main(void){
  int x, y, z;
  printf("Enter the values of X, Y and Z\n");
  scanf("%d %d %d", &x, &y, &z);
  printf("Value of X = %d\nValue of Y = %d\nValue of Z = %d\n", x, y, z);
  printf("Value of X, Y and Z after rotate\n");
  int temp = x;
  x = y;
  y = z;
  z = temp;
  printf("Value of X = %d\nValue of Y = %d\nValue of Z = %d\n", x, y, z);
  return 0;
}