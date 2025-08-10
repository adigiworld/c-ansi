#include<stdio.h>

struct marks{
  int sub1;
  int sub2;
  int sub3;
  int total;
};

int main(void){
  int i;
  struct marks student[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}};
  struct marks total;
  for(i=0;i<3;i+=1){
    student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
    total.sub1=total.sub1+student[i].sub1;
    total.sub2=total.sub2+student[i].sub2;
    total.sub3=total.sub3+student[i].sub3;
    total.total=total.total+student[i].total;
  }
  printf(" STUDENT       TOTAL\n");
  for(i=0;i<3;i+=1){
    printf("Student[%d]     %d\n",i+1,student[i].total);
  }

  printf("\n SUBJECT       TOTAL\n");
  printf("%s      %d\n%s      %d\n%s      %d\n\n",
    "Subject 1",student[0].sub1,
    "Subject 2",student[0].sub2,
    "Subject 3",student[0].sub3);

  return 0;
}