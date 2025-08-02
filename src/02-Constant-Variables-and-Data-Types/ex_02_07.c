#include<stdio.h>

int main(void){
  int x,y;
  short z;
  printf("Enter two 6 digit values for x and y\n");
  scanf("%d %d",&x,&y);
  z=x+y;
  printf("Output of the values x, y and z are %d, %d and %d\n",x,y,z);
  return 0;
}