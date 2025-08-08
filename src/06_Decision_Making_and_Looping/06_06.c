#include<stdio.h>
#define LOOP 100
#define ACCURACY 0.0001

int main(void){
  int n;
  float x,term,sum;
  printf("Input value of x : ");
  scanf("%f",&x);
  sum=0;
  for ( term = 1,n=1; n < LOOP; n+=1){
    sum+=term;
    if(term<=ACCURACY){
      goto output;
    }
    term*=x;
  }
  printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");
  printf("TO ACHIEVE DESIRED ACCURACY\n");
  goto end;
  output:
  printf("\nEXIT FROM LOOP\n");
  printf("Sum = %f; No. of terms = %d\n",sum,n);
  end:;
  

  return 0;
}