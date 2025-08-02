#include <stdio.h>

int main(void){
  int list;
  float sum = 0;
  printf("Enter the number for harmonic series\n");
  scanf("%d", &list);
  int count = 1;
  while (count <= list)  {
    sum += 1.0 / count;
    count += 1;
  }
  printf("Sum of harmonic series of %d numbers is %f", list, sum);
  return 0;
}