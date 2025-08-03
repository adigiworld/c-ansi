#include <stdio.h>
#include <math.h>

int main(void){
  float time, velocity, acceleration;
  printf("Enter the time, velocity and acceleration\n");
  scanf("%f %f %f", &time, &velocity, &acceleration);
  float distance = time * velocity + (acceleration * time * time) / 2;
  printf("The distance is = %f\n", distance);

  return 0;
}