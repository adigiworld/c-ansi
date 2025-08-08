#include<stdio.h>
#define MAXGIRLS 4
#define MAXITEMS 3 

// 310 257 365 210 190 325 405 235 240 260 300 380
int main(void){
  int value[MAXGIRLS][MAXITEMS];
  int girl_total[MAXGIRLS],item_total[MAXITEMS];
  int i,j,grand_total;
  printf("Input data\n");
  printf("Enter values, one at a time, row-wise\n\n");
  for(i=0;i<MAXGIRLS;i+=1){
    girl_total[i]=0;
    for(j=0;j<MAXITEMS;j+=1){
      scanf("%d",&value[i][j]);
      girl_total[i]=girl_total[i]+value[i][j];
    }
  }
  for(j=0;j<MAXITEMS;j+=1){
    item_total[j]=0;
    for(i=0;i<MAXGIRLS;i+=1){
      item_total[j]=item_total[j]+value[i][j];
    }
  }
  grand_total=0;
  for(i=0;i<MAXGIRLS;i+=1){
    grand_total=grand_total+girl_total[i];
  }
  printf("\n GIRLS TOTALS\n\n");
  for(i=0;i<MAXGIRLS;i+=1){
    printf("Salesgirl[%d] = %d\n",i+1,girl_total[i]);
  }
  printf("\n");
  for(j=0;j<MAXITEMS;j+=1){
    printf("Item[%d] = %d\n",j+1,item_total[j]);
  }
  printf("\nGRAND TOTAL = %d\n",grand_total);

  return 0;
}