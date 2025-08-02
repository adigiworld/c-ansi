#include <stdio.h>

#define F_LOW 0
#define F_MAX 250
#define STEP 25

int main(void){
  typedef float REAL;
  REAL fahrenheit, celsius;
  fahrenheit = F_LOW;
  printf("Fahrenheit Celsius\n\n");
  while (fahrenheit <= F_MAX)  {
    celsius = (fahrenheit - 32) / 1.8;
    printf("%5.1f     %7.2f\n", fahrenheit, celsius);
    fahrenheit += STEP;
  }

  return 0;
}