#include <stdio.h>
#include<math.h>

int main(void){
  float number;
  printf("Enter the real number\n");
  scanf("%f", &number);
  printf("%d %f %d\n",(int)ceilf(number), number, (int)floorf(number));

  return 0;
}