#include<stdio.h>

int main(void){
  int a;
  float b;
  char c;
  printf("Enter values for a, b and c\n");
  // scanf("%d %f %c",&a,&b,&c);
  if(scanf("%d %f %c",&a,&b,&c)==3){
    printf("a = %d, b = %f, c = %c\n",a,b,c);
  }else{
    printf("Error in input.\n");
  }

  return 0;
}