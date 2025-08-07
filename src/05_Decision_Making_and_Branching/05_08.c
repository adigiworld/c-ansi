#include<stdio.h>

int main(void){
  int count;
  float value,high,low,sum,average,range;sum=0;
  count=0;
  printf("Enter number of a line : input a NEGATIVE number to end\n");
  input:
  scanf("%f",&value);
  if(value<0){goto output;}
  count+=1;
  if(count==1){
    high=low=value;
  }else if(value>high){
    high=value;
  }else if(value<low){
    low=value;
  }
  sum+=value;
  goto input;
  output:
  average=sum/count;
  range=high-low;
  printf("\n\n");
  printf("Total values : %d\n",count);
  printf("Higest-value : %f\nLowest-value: %f\n",high,low);
  printf("Range : %f\nAverage : %f\n",range,average);

  return 0;
}