#include <stdio.h>
#include <math.h>
#define MIN 0
#define MAX 180
#define STEP 15
#define PI 3.1417

int main(void)
{
  int angle = MIN;
  printf("X(degrees)\tsin(X)\t\tcos(X)\n");
  while (angle <= MAX)
  {
    printf("%d \t\t%1.3lf \t\t%1.3lf\n", angle, sin(angle*PI/MAX), cos(angle*PI/MAX));
    angle += STEP;
  }

  return 0;
}