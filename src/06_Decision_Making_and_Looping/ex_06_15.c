#include<stdio.h>
#include<math.h>

int main(void){
  float cost,rate,value,years;
  printf("Enter the values of Original cost, Deception rate and Scrap value : ");
  scanf("%f %f %f",&cost,&rate,&value);
  years=(log(value/cost))/(log(1-rate));
  printf("Useful life in years = %f\n",years);

  return 0;
}