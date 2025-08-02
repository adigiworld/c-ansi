#include <stdio.h>

int main(void){
  int positive=0;
  int negative=0;
  int number=1;
  while (number!=0)
  {
    scanf("%d",&number);
    if (number>0)
    {
      positive+=1;
    }else if (number<0)
    {
      {negative+=1;}
    }else{break;}
    
  }
  printf("Positive numbers are %d\n",positive);
  printf("Negative numbers are %d\n",negative);
  return 0;
}