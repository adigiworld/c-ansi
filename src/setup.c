#include <unistd.h>
#include<stdio.h>

int main()
{
  write(1, "You'r all setup!\n", 17);

  char *name = "aadil";
  printf("%c\n", name[0]);
  name += 1;
  printf("%c\n", name[1]);
  name += 1;
  printf("%c\n", name[2]);

  return 0;
}
