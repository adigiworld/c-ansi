#include<stdio.h>
#define COLUMN 18
#define ROW 15

int main(void){
  int r,c;
  for(r=0;r<ROW;r+=1){
    for(c=0;c<COLUMN;c+=1){
      if(r==0){
        printf("*");
      }else if(r==1 && (c<2||c>15)){
        printf("*");
      }else if(r==2&&(c<9||c>15)){
        printf("*");
      }else if((r>2&&r<6)&&(c<4)){
        printf("*");
      }else if((r>2&&r<6)&&(c>3)){
        printf("");
      }else if(r==6 && (c<5||c>13)){
        printf("*");
      }else if((r>6&&r<9) && (c>13)){
        printf("*");
      }else if((r>8&&r<12) && (c>13)){
        printf("*");
      }else if((r>8&&r<12) && (c<14)){
        printf(" ");
      }else if((r==12) && (c<4||c>13)){
        printf("*");
      }else if((r==13) && (c<3||c>13)){
        printf("*");
      }else if((r==14) && (c<2||c>13)){
        printf("*");
      }else{
        printf("-");
      }
    }
    printf("\n");
  }

  return 0;
}