#include<stdio.h>

void fuction1(void);
void fuction2(void);

int main(void){
  int m=1000;
  fuction2();
  printf("%d\n",m);

  return 0;
}


void fuction1(void){
  int m =10;
  printf("%d\n",m);

}
void fuction2(void){
  int m =100;
  fuction1();
  printf("%d\n",m);

}