#include<stdio.h>

int main(void){
  int x,y;
  double power(int,int);
  printf("Enter x,y: ");
  scanf("%d %d",&x,&y);
  printf("%d to power %d is %lf\n\n",x,y,power(x,y));

}
double power(int x,int y){
  double p;
  p=1.0;
  if(y>=0){
    while(y){
      p*=x;
      y-=1;
    }
  }else{
    while(y){
      p/=x;
      y+=1;
    }
  }
  return p;
}