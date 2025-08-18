#include<stdio.h>

void exchange(int *,int *);

int main(void){
  int x,y;
  x=100;
  y=200;
  printf("Before exchange : x = %d, y = %d\n",x,y);
  exchange(&x,&y);
  printf("Before exchange : x = %d, y = %d\n",x,y);

}
void exchange(int *a,int *b){
  int t;
  t=*a;
  *a=*b;
  *b=t;
}