#include<stdio.h>
#include<math.h>

#define STEP 0.1

int main(void){
  float x,y,f;
  printf("x");
  for( x=STEP;x<=1;x+=STEP){
    printf("\t%.1f",x);
  }
  printf("\n");
  for( x=0;x<10;x+=1){
    printf("%.1f\t",x);
    f=x;
    for( int k=1;k<10;k+=1){
      f=f+STEP;
      y=exp(-f);
      printf("%.4f\t",y);
    }
    printf("\n");
  }


  return 0;
}