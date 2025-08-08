#include<stdio.h>
#define N 5

int main(void){
  int value[N];
  int i,j,n,x;
  for(n=0;n<N;n+=1){
    printf("Enter employees in Group - %d : ",n+1);
    scanf("%d",&x);
    value[n]=x;
    printf("%d\n",value[n]);
  }
  printf("\n");
  printf("|\n");
  for(n=0;n<N-1;n+=1){
    for(i=1;i<=3;i+=1){
      if(i==2){
        printf("Group-%1d |",n+1);
      }else{
        printf("|");
      }
      for(j=1;j<=value[n]-1;j+=1){
        printf("*");
      }
      if(i==2){
        printf("(%d)\n",value[n]);
      }else{
        printf("\n");
      }
    }
    printf("|\n");
  }

  return 0;
}