#include<stdio.h>

int fibonacci(int n);

int main(void){
  int num;
  int count=0;
  printf("Enter a number to calculate first fibonacci number : ");
  scanf("%d",&num);
  long int last=1;
  long int sec_last=0;
  do{
    long int fib;
    count+=1;
    if(count==1){
      fib=last+sec_last;
      printf("%2d fibonacci number is %ld\n",count,fib);
      sec_last=last;
      last=fib;
      continue;
    }
    if(count==2){
      sec_last=0;
      fib=last+sec_last;
      printf("%2d fibonacci number is %ld\n",count,fib);
      sec_last=last;
      last=fib;
      continue;
    }
    fib=last+sec_last;
    printf("%2d fibonacci number is %ld\n",count,fib);
    sec_last=last;
    last=fib;

  }while(count<num);

  return 0;
}

// int fibonacci(int n){
//   if(n==1){return 1;}
//   if(n==2){return 1;}
//   return (fibonacci(n-2)+fibonacci(n-1));
// }