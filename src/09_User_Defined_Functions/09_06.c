#include<stdio.h>

void sort(int m,int x[]);

int main(void){
  int i;
  int marks[5]={40,90,73,81,35};
  printf("Marks before sorting\n");
  for(i=0;i<5;i+=1){
    printf("%d ",marks[i]);
  }
  printf("\n");
  printf("Marks after sorting\n");
  sort(5,marks);
  for(i=0;i<5;i+=1){
    printf("%d ",marks[i]);
  }
  printf("\n");


  return 0;
}

void sort(int m, int x[]){
  int i,j,t;
  for(i=0;i<m;i+=1){
    for(j=1;j<m-i;j+=1){
      if(x[j-1]>x[j]){
        t=x[j-1];
        x[j-1]=x[j];
        x[j]=t;
      }
    }
  }
}