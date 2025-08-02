#include<stdio.h>

float celsius_to_fahrenheit(int);
float fahrenheit_to_celsius(int);
int main(void){
  printf("32 Fahrenheit = %f Celsius\n",fahrenheit_to_celsius(32));
  printf("100 Celsius = %f Fahrenheit\n",celsius_to_fahrenheit(100));
  return 0;
}

float celsius_to_fahrenheit(int c){
  return (c*9/5+32);
}
float fahrenheit_to_celsius(int f){
  return ((f-32)*5/9);
}