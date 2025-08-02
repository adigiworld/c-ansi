#include<stdio.h>

int main(void){
  float price;
  printf("Enter the price of an item\n");
  scanf("%f",&price);
  printf("The price of the item %5.2f Rs in paise is %5.0f Paise\n",price,price*100);
  return 0;
}