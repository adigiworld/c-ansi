#include<stdio.h>
#define FIRST 360
#define SECOND 240

int main(void){
  int n,m,i,j,roll_number,marks,total;
  printf("Enter number of students and subjects\n");
  scanf("%d %d", &n,&m);
  printf("\n");
  for(i=1;i<=n;i+=1){
    printf("Enter roll number\n");
    scanf("%d",&roll_number);
    total=0;
    printf("\nEnter marks if %d subjects for ROLL NO %d\n",m,roll_number);
    for ( j = 1; j <= m; j+=1){
      scanf("%d",&marks);
      total+=marks;
    }
    printf("TOTAL MARKS = %d ",total);
    if(total>FIRST){
      printf("() FIRST Division )\n\n");
    }else if(total>=SECOND){
      printf("( SECOND Division )\n\n");
    }else{
      printf("( *** F A I L *** )\n\n");
    }
    
  }

  return 0;
}