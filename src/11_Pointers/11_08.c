#include<stdio.h>

struct invent{
  // char *name[20];
  char name[20];
  int number;
  float price;
};

// Washing_machine 5 7500 Electric_iron 12 350 Two_in_one 7 1250

int main(void){
  struct invent product[3],*ptr;
  printf("INPUT\n\n");
  for(ptr=product;ptr<product+3;ptr+=1){
    scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
  }
  printf("\n\nOUTPUT\n\n");
  ptr=product;
  while(ptr<product+3){
    printf("%-20s %5d %10.2f\n",ptr->name,ptr->number,ptr->price);
    ptr+=1;
  }

  return 0;
}