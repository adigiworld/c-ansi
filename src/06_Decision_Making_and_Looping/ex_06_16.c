#include<stdio.h>

void square();
void square_hole();

int main(void){
  // int size,r,c;
  // printf("Enter the size of square : ");
  // scanf("%d",&size);
  // for(r=0;r<size;r+=1){
  //   for(c=0;c<size;c+=1){
  //     printf("S ");
  //   }
  //   printf("\n");
  // }
  square();
  printf("\n\n");
  square_hole();

  return 0;
}

void square(){
  int size,r,c;
  printf("Enter the size of square : ");
  scanf("%d",&size);
  for(r=0;r<size;r+=1){
    for(c=0;c<size;c+=1){
      printf("S ");
    }
    printf("\n");
  }
}

void square_hole(){
  int size,r,c;
  printf("Enter the size of square : ");
  scanf("%d",&size);
  for(r=0;r<size;r+=1){
    for(c=0;c<size;c+=1){
      if((r==0||r==size-1)||(c==0||c==size-1)){
        printf("S ");
      }else{
        printf("  ");
      }
    }
    printf("\n");
  }
}