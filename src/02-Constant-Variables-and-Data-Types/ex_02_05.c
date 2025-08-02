#include <stdio.h>

int main(void){
  float rice_price,sugar_price;
  printf("Enter the price of Rice and Sugar\n");
  scanf("%f %f",&rice_price,&sugar_price);
  printf("***LIST OF ITEMS***\n");
  printf("Item     Price\n");
  printf("Rice     Rs %.2f\n",rice_price);
  printf("Sugar    Rs %.2f\n",sugar_price);
  return 0;
}