#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12

int main(void){
  int row,column,y;
  row=1;
  printf("     MULTIPLICATION TABLE    \n");
  printf("------------------------------------------\n");
  do{
    column=1;
    do{
      y=row*column;
      printf("%4d",y);
      column+=1;
    }while(column<=COLMAX);
    printf("\n");
    row+=1;
  }while(row<=ROWMAX);
  printf("------------------------------------------\n");
  return 0;
}