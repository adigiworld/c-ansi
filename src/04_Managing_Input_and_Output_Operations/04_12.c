#include<stdio.h>
#define ITEMS 4

int main(void){
  int i,quantity[5];
  float rate[5],value,total_value;
  char code[5][5];
  i=1;
  while(i<=ITEMS){
    printf("Enter code, quantity and rate: ");
    scanf("%s %d %f",code[i],&quantity[i],&rate[i]);
    i+=1;
  }
  printf("\n\n");
  printf("            INVENTORY REPORT     \n");
  printf("--------------------------------------------\n");
  printf("  Code      Quantity   Rate     value  \n");
  printf("--------------------------------------------\n");
  total_value=0;
  i=1;
  while(i<=ITEMS){
    value=rate[i]*quantity[i];
    printf("%5s %10d %10.2f %e\n",code[i],quantity[i],rate[i],value);
    total_value+=value;
    i+=1;
  }
  printf("--------------------------------------------\n");
  printf("      Total Value = %e\n",total_value);
  printf("--------------------------------------------\n");


  return 0;
}