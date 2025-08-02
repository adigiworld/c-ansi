#include<stdio.h>

#define n 10

int main(void){
  int count;
  float sum,average,number;
  sum=0;
  count=0;
  while (count<n)
  {
    scanf("%f",&number);
    sum+=number;
    count+=1;
  }
  average=sum/n;
  printf("N = %d Sum = %f\n",n,sum);
  printf("Average = %f\n",average);
  return 0;
}