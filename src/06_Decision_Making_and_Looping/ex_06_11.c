#include<stdio.h>
#include<math.h>

void revers_digit(int num);

int main(void){
  int num,count;
  long int bin;
  printf("Enter a number to convert it into binary form : ");
  scanf("%d",&num);
  bin=0;
  count=0;
  while(num>0){
    bin=bin+pow(10,count)*(num%2);
    num=num/2;
    count+=1;
  }
  printf("%ld\n",bin);
  printf("\n");

  return 0;
}
