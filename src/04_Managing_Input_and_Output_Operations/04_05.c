#include<stdio.h>

int main(void){
  float x,y;
  double p,q;
  printf("Values of x and y: ");
  scanf("%f %f",&x,&y);
  printf("\n");
  printf("x = %f, y = %f\n\n",x,y);
  printf("Values of p and q :");
  scanf("%lf %lf",&p,&q);
  printf("\n\np = %.12lf\nq = %.12e\n",p,q);

  return 0;
}