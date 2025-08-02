#include<stdio.h>

void print_star(int);

int main(void){
  // printf("*\n");
  // printf("*\t*\n");
  // printf("*\t*\t*\n");
  // printf("*\t*\t*\t*\n");
  print_star(5);
  return 0;
}

void print_star(int times){
  for (size_t i = 0; i < times; i++)  {
    for (size_t j = 0; j <=i; j++)    {
      printf("*\t");
    }
      printf("\n");
  }
}