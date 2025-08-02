#include<stdio.h>
#include<math.h>

float dist_bt_point(float,float,float,float);

int main(void){
  printf("The distance b/t point (0,0) and (3,4) is %f\n",dist_bt_point(0,0,3,4));
  return 0;
}

float dist_bt_point(float x1,float y1,float x2,float y2){
  return sqrtf((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}