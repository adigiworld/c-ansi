#include<stdio.h>
#include<math.h>

float area(float,float,float);

int main(void){
  printf("Area of side 6, 6, 6 is %f\n",area(6,6,6));
  printf("Area of side 3, 4, 5 is %f\n",area(3,4,5));
  return 0;
}

float area(float a,float b ,float c){
  float s=(a+b+c)/2;
  float area=sqrtf(s*(s-a)*(s-b)*(s-c));
  return area;
}