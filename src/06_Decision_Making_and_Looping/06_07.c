#include<stdio.h>
#include<math.h>

int main(void){
  int count,negative;
  double number,sqr_root;
  printf("Enter 9999 to STOP\n");
  count=0;
  negative=0;
  while(count<=100){
    printf("Enter anumber : ");
    scanf("%lf",&number);
    if(number==9999){
      break;
    }
    if(number<0){
      printf("Number is negative\n\n");
      negative+=1;
      continue;
    }
    sqr_root=sqrt(number);
    printf("Number      = %lf\nSquare root = %lf\n\n",number,sqr_root);
    count+=1;
  }
  printf("Number of items done = %d\n",count);
  printf("\n\nNegative items = %d\n",negative);
  printf("END OF DATA\n");

  return 0;
}