#include<stdio.h>

int main(void){
  struct marks{
    int sub[3];
    int total;
  };
  struct marks student[3]={45,67,81,0,75,53,69,0,57,36,71,0};
  struct marks total;
  int i,j;
  for(i=0;i<3;i+=1){
    for(j=0;j<3;j+=1){
      student[i].total+=student[i].sub[j];
      total.sub[j]+=student[i].sub[j];
    }
    total.total+=student[i].total;
  }
  printf("STUDENT       TOTAL\n\n");
  for(i=0;i<3;i+=1){
    printf("Student[%d]      %d\n",i+1,student[i].total);
  }
  printf("\nSUBJECT       TOTAL\n\n");
  for(j=0;j<3;j+=1){
    printf("Subject-%d       %d\n",j+1,total.sub[j]);
  }
  printf("\nGrand Total = %d\n",total.total);

  return 0;
}