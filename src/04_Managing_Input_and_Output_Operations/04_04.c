#include<stdio.h>
#include<ctype.h>

int main(void){
  int a,b,c,x,y,z;
  int p,q,r;
  printf("Enter three integer numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  printf("%d %d %d\n",a,b,c);
  printf("Enter two 4-digit number\n");
  scanf("%2d %4d",&x,&y);
  printf("%d %d\n",x,y);
  printf("Enter two integers\n");
  scanf("%d %d",&a,&x);
  printf("%d %d\n",a,x);
  printf("Enter a none digit integers\n");
  scanf("%3d %4d %3d",&p,&q,&r);
  printf("%d %d %d\n",p,q,r);
  printf("Enter two three digit numbers\n");
  scanf("%d %d",&x,&y);
  printf("%d %d\n",x,y);

  return 0;
}