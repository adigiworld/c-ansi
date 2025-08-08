#include<stdio.h>
#define STUDENTS 3
#define ITEMS 25

// key => abcdabcdabcdabcdabcdabcda
// Student-1 => abcdabcdabcdabcdabcdabcda
// Student-2 => abcddcbaabcdabcdddddddddd
// Student-3 => aaaaaaaaaaaaaaaaaaaaaaaaa

int main(void){
  char key[ITEMS+1],response[ITEMS+1];
  int count,i,student,n,correct[ITEMS+1];
  printf("Input key to the items\n");
  for(i=0;i<ITEMS;i+=1){
    scanf("%c",&key[i]);
  }
  scanf("%c",&key[i]);
  key[i]='\0';

  for(student=1;student<=STUDENTS;student+=1){
    count=0;
    printf("\n");
    printf("Input responses of student-%d\n",student);
    for(i=0;i<ITEMS;i+=1){
      scanf("%c",&response[i]);
    }
    scanf("%c",&response[i]);
    response[i]='\0';

    for(i=0;i<ITEMS;i+=1){
      correct[i]=0;
    }

    for(i=0;i<ITEMS;i+=1){
      if(response[i]==key[i]){
        count+=1;
        correct[i]=1;
      }
    }
    printf("\n");
    printf("Student-%d\n",student);
    printf("Score is %d out of %d\n",count,ITEMS);
    printf("Response to the items below are wrong\n");
    n=0;
    for(i=0;i<ITEMS;i+=1){
      if(correct[i]==0){
        printf("%d ",i+1);
        n=n+1;
      }
    }
    if(n==0){
      printf("NIL\n");
    }
    printf("\n");
  }

  return 0;
}