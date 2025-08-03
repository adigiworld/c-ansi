#include <stdio.h>
#include<math.h>

int main(void){
  float number;
  printf("Enter the real number\n");
  scanf("%f", &number);
  printf("%d %f %d\n",(int)ceilf(number), number, (int)floorf(number));

  return 0;
}

// #include <stdio.h>

// int main(void){
//   int age;
//   printf("Enter the your age\n");
//   scanf("%d", &age);
//   age=(unsigned) age;
//   printf("Your are %d years old now\n",age);

//   return 0;
// }
