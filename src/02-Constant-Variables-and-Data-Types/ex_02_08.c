#include<stdio.h>

int main(void){
  float x,y;
  int z;
  printf("Enter two float values\n");
  scanf("%f %f",&x,&y);
  z=x+y;
  printf("Output of the values x, y and z are %f, %f and %d\n",x,y,z);
  return 0;
}