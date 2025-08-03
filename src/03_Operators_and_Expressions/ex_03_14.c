#include <stdio.h>
#include<math.h>

int main(void){
  int m,n;
  printf("Enter the values of M and N\n");
  scanf("%d %d", &m,&n);
  if(m%n==0){
    printf("%d is a multiple of %d\n",m,n);
  }else{
    printf("%d is not a multiple of %d\n",m,n);
  }

  return 0;
}