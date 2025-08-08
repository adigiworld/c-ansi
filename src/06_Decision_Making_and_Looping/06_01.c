#include<stdio.h>

int main(void){
  int count,n;
  float x,y;
  printf("Enter the values of x and n : ");
  scanf("%f %d",&x,&n);
  y=1.0;
  count=1;
  while(count<=n){
    y=y*x;
    count+=1;
  }
  printf("\nx = %f; n = %d to power n = %f\n",x,n,y);

  return 0;
}