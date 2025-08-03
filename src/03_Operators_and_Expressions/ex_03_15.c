#include <stdio.h>
#include<math.h>

float addition(float a, float b, float c);
float average(float a, float b, float c);
float largest(float a, float b, float c);
float smallest(float a, float b, float c);

int main(void){
  float a, b, c, max,min,sum,avg;
  printf("Enter the three number\n");
  scanf("%f %f %f", &a, &b, &c);
  sum=addition(a,b,c);
  avg=average(a,b,c);
  max=largest(a,b,c);
  min=smallest(a,b,c);
  printf("%f\n",sum);
  printf("%f\n",avg);
  printf("%f\n",max);
  printf("%f\n",min);

  return 0;
}

float largest(float a, float b, float c){
  return ((a > b && a > c) ? a : (b > c ? b : c));
}
float smallest(float a, float b, float c){
  return ((a < b && a < c) ? a : (b < c ? b : c));
}
float addition(float a, float b, float c){
  return (a+b+c);
}
float average(float a, float b, float c){
  return (addition(a,b,c)/3);
}