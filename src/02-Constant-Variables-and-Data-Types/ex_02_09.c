#include<stdio.h>

int main(void){
  typedef float REAL;
  REAL x,y;
  int z;
  printf("Enter two 6 digit values for  and y\n");
  scanf("%f %f",&x,&y);
  z=x+y;
  printf("Output of the values x, y and z are %f, %f and %d\n",x,y,z);
  return 0;
}