#include<stdio.h>

int main(void){
  int no;
  char name1[15],name2[15],name3[15];
  printf("Enter the seral number and name one\n");
  scanf("%d %15c",&no,name1);
  printf("%d %15s\n\n",no,name1);
  printf("Enter the seral number and name two\n");
  scanf("%d %15c",&no,name2);
  printf("%d %15s\n\n",no,name2);

  printf("Enter the seral number and name three\n");
  scanf("%d %15c",&no,name3);
  printf("%d %15s\n\n",no,name3);

  return 0;
}