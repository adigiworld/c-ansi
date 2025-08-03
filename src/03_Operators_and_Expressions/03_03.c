#include <stdio.h>

int main(void){
  int a, b, c, d;
  a = 15;
  b = 10;
  c = ++a - b;
  printf("a = %d, b = %d, c = %d\n", a, b, c); // 15, 10, 6
  d = b++ + a;
  printf("a = %d, b = %d, d = %d\n", a, b, d); // 16, 10, 26
  printf("a/b = %d\n", a / b);                 // 1
  printf("a%%b = %d\n", a % b);                // 5
  printf("a *= b = %d\n", a *= b);             // 176
  printf("%d\n", (c > d) ? 1 : 0);             // 0
  printf("%d\n", (c < d) ? 1 : 0);             // 1
  return 0;
}