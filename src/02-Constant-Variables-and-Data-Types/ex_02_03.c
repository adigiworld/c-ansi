#include <stdio.h>

#define LIMIT 101

int main(void){
  int number = 1;
  while (number < LIMIT)  {
    if ((number % 2) == 0)    {
      printf("%d\n", number);
    }
    number+=1;
  }

  return 0;
}