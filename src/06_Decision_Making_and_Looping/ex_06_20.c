#include<stdio.h>

int main(void){
  int i,num,sum,count;
  sum=0;
  count=0;
  printf("Enter 10 two-digit numbers : ");

  for(i=0;i<10;i+=1){
    scanf("%d",&num);
    if(num>0){
      sum=sum+num;
      count+=1;
    }
    if(sum>999){
      break;
    }
  }
  printf("%d numbers are added and the sum is %d\n",count,sum);

  return 0;
}