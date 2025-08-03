#include<stdio.h>

int main(void){
  // char address[80];
  // printf("Enter address\n");
  // scanf("%[a-z]",address);
  // printf("%-80s\n",address);

  char address[80];
  printf("Enter address\n");
  scanf("%[^\n]",address);
  printf("%-80s\n",address);

  return 0;
}
