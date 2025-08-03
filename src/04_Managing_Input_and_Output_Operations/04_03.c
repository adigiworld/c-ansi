#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char alphabet;
  printf("Enter an alphabet\n");
  alphabet = getchar();
  if (islower(alphabet))
  {
    putchar(toupper(alphabet));
  }
  else
  {
    putchar(tolower(alphabet));
  }
  printf("\n");
  return 0;
}