#include<stdio.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 000
#define EA3 100
#define EA4 0

int main(void){
  int level,jobnumber;
  float gross,basic,hours_rent,perks,net,income_tax;
  input:
  printf("\nEnter level, job number and basic pay\n");
  printf("Enter 0 (zero) for level to END\n\n");
  scanf("%d",&level);
  if(level==0){goto stop;}
  scanf("%d %f",&jobnumber,&basic);
  switch (level)
  {
  case 1:
    perks=CA1+EA1;
    break;
  case 2:
    perks=CA2+EA2;
    break;
  case 3:
    perks=CA3+EA3;
    break;
  case 4:
    perks=CA4+EA4;
    break;
  default:
    printf("Error in level code\n");
    goto stop;
  }
  hours_rent=0.25*basic;
  gross=basic+hours_rent+perks;
  if(gross<=2000){
    income_tax=0;
  }else if(gross<=4000){
    income_tax=0.03*gross;
  }else if(gross<=5000){
    income_tax=0.05*gross;
  }else{
    income_tax=0.08*gross;
  }
  net=gross-income_tax;
  printf("%d %d %.2f\n",level,jobnumber,net);
  goto input;

  stop:printf("\n\nEND OF THE PROGRAM\n\n");

  return 0;
}