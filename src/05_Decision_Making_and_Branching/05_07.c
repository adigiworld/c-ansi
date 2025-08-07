#include<stdio.h>
#include<math.h>

int main(void){
  double x,y;
  int count;
  count=1;
  printf("Enter FIVE real values ina LINE\n");
  read:
  scanf("%lf",&x);
  printf("\n");
  if(x<0){
    printf("Value - %d is negative\n",count);
  }else{
    y=sqrt(x);
    printf("%lf\t %lf\n",x,y);
  }
  count+=1;
  if(count<=5){goto read;}
  printf("\nEnd of computation\n");

  return 0;
}