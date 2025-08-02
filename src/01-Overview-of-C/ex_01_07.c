#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void){
  int a = 20;
  int b = 10;
  printf("%d + %d = %d\n", a, b, add(a, b));
  printf("%d - %d = %d\n", a, b, sub(a, b));
  return 0;
}

int add(int a, int b){
  return a + b;
}

int sub(int a, int b){
  return a - b;
}