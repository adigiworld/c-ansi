#include<stdio.h>

void number_triangle(int);
void char_triangle(int,char);

int main(void){
  int count;
  char character;
  printf("Enter the number of lines you want to print : ");
  scanf("%d",&count);
  number_triangle(count);
  printf("\n");
  printf("\n");
  
  printf("Enter the number of lines and a character you want to print : ");
  scanf("%d %c",&count,&character);
  char_triangle(count,character);

  return 0;
}

void number_triangle(int count){
  for(int i=1;i<=count;i+=1){
    for(int j=0;j<i;j+=1){
      printf("%d",i);
    }
    printf("\n");
  }
}

void char_triangle(int count, char c){
  for(int i=0;i<count;i+=1){
    for(int j=0;j<count-i;j+=1){
      printf("%c",c);
    }
    printf("\n");
  }
}