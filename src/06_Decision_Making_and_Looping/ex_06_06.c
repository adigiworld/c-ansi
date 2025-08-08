#include<stdio.h>
#include<math.h>

#define P 1000
#define R 0.1
#define YEAR 11

int main(void){
  int year;
  float value,principal,r;
  printf("P : ");
  for(int i=1;i<YEAR;i+=1){
    printf("%d, ",P*i);
  }
  printf("\n");
  printf("r : ");
  for(int i=1;i<YEAR;i+=1){
    printf("%.2f, ",(R+0.01*i));
  }
  printf("\n");
  printf("n : ");
  for(int i=1;i<YEAR;i+=1){
    printf("%d, ",i);
  }
  printf("\n");
  printf("V : ");
  principal=P;
  for(int i=1;i<YEAR;i+=1){
    r =(R+0.01*i);
    value=principal*pow((1+r),i);
    printf("%.2f, ",value);
    principal=value;
  }
  printf("\n");


  return 0;
}