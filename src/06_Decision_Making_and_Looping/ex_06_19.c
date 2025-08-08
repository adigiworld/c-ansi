#include<stdio.h>

int main(void){
  int size,r,c;
  printf("Enter the size of square : ");
  scanf("%d",&size);
  for(r=0;r<size;r+=1){
    for(c=0;c<size;c+=1){
      if(r==size/2&& c==size/2){
        printf("O ");
      }else{
        printf("S ");
      }
    }
    printf("\n");
  }
}