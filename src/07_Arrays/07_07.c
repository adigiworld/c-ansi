#include<stdio.h>
#include<math.h>
#define MAXSIZE 100

// 65 9 27 78 12 20 33 49 -1

int main(void){
  int i,n;
  float value[MAXSIZE],deviation,sum,sum_sqr,mean,variance,std_deviation;
  sum=sum_sqr=n=0;
  printf("Input values: input -1 to end \n");
  for(i=1;i<=MAXSIZE;i+=1){
    scanf("%f",&value[i]);
    if(value[i]==-1){break;}
    sum+=value[i];
    n+=1;
  }
  mean=sum/(float)n;
  for(i=1;i<=n;i+=1){
    deviation=value[i]-mean;
    sum_sqr+=(deviation*deviation);
  }
  variance=sum_sqr/(float)n;
  std_deviation=sqrt(variance);
  printf("\nNumber of items : %d\n",n);
  printf("Mean : %f\n",mean);
  printf("Standard deviation : %f\n\n",std_deviation);

  return 0;
}