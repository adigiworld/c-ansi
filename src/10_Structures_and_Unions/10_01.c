#include<stdio.h>

struct personal{
  char name[20];
  int day;
  char month[10];
  int year;
  float salary;
};

// M.L.Goel 10 January 1945 4500

int main(void){
  struct personal person;
  printf("Input Values\n");
  scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
  printf("%s %d %s %d %f\n",person.name,person.day,person.month,person.year,person.salary);

  return 0;
}