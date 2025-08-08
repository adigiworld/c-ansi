#include<stdio.h>
#define ROES 5
#define COLUMNS 5

int main(void){
  int row,column,product[ROES][COLUMNS];
  int i,j;
  printf("\n\n");
  printf("  MULTIPLICATION TABLE\n\n");
  printf("    ");
  for(j=1;j<=COLUMNS;j+=1){
    printf("%4d",j);
  }
  printf("\n");
  printf("---------------------------\n");
  for(i=0;i<ROES;i+=1){
    row=i+1;
    printf("%2d |",row);
    for(j=0;j<COLUMNS;j+=1){
      column=j+1;
      product[i][j]=row*column;
      printf("%4d",product[i][j]);
    }
    printf("\n");
  }

  return 0;
}