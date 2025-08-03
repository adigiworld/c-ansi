#include <stdio.h>
#include<math.h>

int main(void){
  float demand_cost,setup_cost,holding_cost;
  printf("Enter the values for Demand cost, Setup cost and Holding cost\n");
  scanf("%f %f %f", &demand_cost,&setup_cost,&holding_cost);
  float eoq=sqrtf((2*demand_cost*setup_cost)/holding_cost);
  float tbo=sqrtf((2*setup_cost)/(demand_cost*holding_cost));
  printf("EOQ = %f\n",eoq);
  printf("TBO = %f\n",tbo);

  return 0;
}