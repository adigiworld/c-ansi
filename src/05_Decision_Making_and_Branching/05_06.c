#include<stdio.h>
#define MAXLOAN 50000

int main(void){
  long int loan1,loan2,loan3,sancloan,sum23;
  printf("Enter the value of previous two loans: \n");
  scanf("%ld %ld",&loan1,&loan2);
  printf("Enter the value of new loan:\n");
  scanf("%ld",&loan3);
  sum23=loan1+loan2;
  sancloan=(loan1>0)?0:((sum23>MAXLOAN)?MAXLOAN-loan2:loan3);
  printf("\n\n");
  printf("Previous loan panding:\n%ld %ld\n",loan1,loan2);
  printf("Loan requested = %ld\n",loan3);
  printf("Loan sanctioned = %ld\n",sancloan);

  return 0;
}