#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c, discriminant, root1, root2;
  printf("Input value of a, b and c\n");
  scanf("%f %f %f", &a, &b, &c);
  discriminant = b * b - 4 * a * c;
  if (discriminant < 0)
  {
    printf("\n\nROOTS ARE IMAGINARY\n");
  }
  else
  {
    root1 = (-b + sqrtf(discriminant)) / (2.0 * a);
    root2 = (-b - sqrtf(discriminant)) / (2.0 * a);
    printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1, root2);
  }

  return 0;
}