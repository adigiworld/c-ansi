#include <stdio.h>

int main(void)
{
  float price, years, depreciation;
  printf("Enter price, years and depreciation of service\n");
  scanf("%f %f %f", &price, &years, &depreciation);
  float salvage = price - (depreciation * years);
  printf("Salvage value is = %f", salvage);
  return 0;
}