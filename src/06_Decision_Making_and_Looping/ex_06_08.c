#include<stdio.h>

int main(void){
  int age;
  int in_rage=0;
  printf("Enter the age of 100 persons one by one : ");
  for(int i=0;i<100;i+=1){
    scanf("%d",&age);
    if(age>=50 && age<60){
      in_rage+=1;
      continue;
    }
  }
  printf("The number of persons in age group 50 to 60 is %d\n",in_rage);

  return 0;
}