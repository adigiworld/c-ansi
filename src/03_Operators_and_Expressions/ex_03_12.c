#include <stdio.h>
#include<math.h>

int main(void){
  char gender='M';
  int age=25;
  float height=98.50;
  long int amount=123456789L;
  double balance=1234567L;
  printf("Size of char is = %lu\n",sizeof gender);
  printf("Size of int is = %lu\n",sizeof age);
  printf("Size of float is = %lu\n",sizeof height);
  printf("Size of long int is = %lu\n",sizeof amount);
  printf("Size of double is = %lu\n",sizeof balance);

  return 0;
}