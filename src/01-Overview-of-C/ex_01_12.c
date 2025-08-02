#include<stdio.h>
#include<math.h>

#define PI 3.1417

float dist_bt_point(float,float,float,float);
float perimeter_of_circle(float);
float area_of_circle(float);

int main(void){
  float radius = dist_bt_point(0,0,4,5);
  printf("Perimeter of circle with radius %f is %f\n",radius,perimeter_of_circle(radius));
  printf("Area of circle with radius %f is %f\n",radius,area_of_circle(radius));
  return 0;
}

float dist_bt_point(float x1,float y1,float x2,float y2){
  return sqrtf((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float perimeter_of_circle(float radius){
  return (2*PI*radius);
}

float area_of_circle(float radius){
  return (PI * radius * radius);
}
