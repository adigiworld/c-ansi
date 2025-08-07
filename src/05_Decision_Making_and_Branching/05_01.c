#include<stdio.h>

int main(void){
  int a,b,c,d;
  float ratio;
  printf("Enter four integer values\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(c-d!=0){
    ratio=(float)(a+b)/(float)(c-d);
    printf("Ratio = %f",ratio);
  }

  return 0;
}