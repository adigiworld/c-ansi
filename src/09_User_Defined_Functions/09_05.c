#include<stdio.h>
#include<math.h>

#define SIZE 5

float std_dev(float a[],int n);
float mean(float a[],int n);

// 35.0 67.0 79.5 14.20 55.75

int main(void){
  float values[SIZE];
  int i;
  printf("Enter %d float values\n",SIZE);
  for(i=0;i<SIZE;i+=1){
    scanf("%f",&values[i]);
  }
  printf("Std.deviation is %f\n\n",std_dev(values,SIZE));

  return 0;
}

float std_dev(float a[],int n){
  int i;
  float x,sum=0.0;
  x=mean(a,n);
  for(i=0;i<n;i+=1){
    sum+=(a[i]-x)*(a[i]-x);
  }
  return sqrt(sum/(float)n);
}

float mean(float a[],int n){
  int i;
  float sum=0.0;
  for(i=0;i<n;i+=1){
    sum+=a[i];
  }
  return (sum/(float)n);
}