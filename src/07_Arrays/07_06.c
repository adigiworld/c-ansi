#include<stdio.h>
#define N 10

// 1.111 2.222 3.333 4.444 5.555
// 3 5 8 9 4 6

int main(void){
  int i,j,n;
  float median,a[N],t;
  printf("Enter the number of items\n");
  scanf("%d",&n);
  printf("Input %d values \n",n);
  for(i=1;i<=n;i+=1){
    scanf("%f",&a[i]);
  }
  for(i=1;i<n;i+=1){
    for(j=1;j<=n-i;j+=1){
      if(a[j]<=a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }else{
        continue;
      }
    }
  }
  if(n%2==0){
    median=(a[n/2]+a[n/2+1])/2.0;
  }else{
    median=a[n/2+1];
  }
  for(i=1;i<=n;i+=1){
    printf("%f ",a[i]);
  }
  printf("\n\nMedian is %f\n",median);

  return 0;
}