#include <stdio.h>
#include <math.h>

int main(void)
{
  float inductance, resistor, capacitance;
  float frequency;
  printf("Enter the values for inductance, resistor and capacitance\n");
  scanf("%f %f %f", &inductance, &resistor, &capacitance);
  frequency = sqrtf((1 / (inductance * capacitance)) - ((resistor * resistor) / (4 * capacitance * capacitance)));
  printf("%f\n", frequency);

  return 0;
}