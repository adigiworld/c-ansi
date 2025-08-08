#include<stdio.h>
#include<math.h>
#define PI 3.1417

double series_sin(float);
double series_cos(float);
double series_sum();
int factorial(int);

int main(void){
  double sin_x,cos_x,sum,angle;
  angle=45*PI/180;
  sin_x=series_sin(angle);
  printf("sinx = %f\n",sin_x);

  cos_x=series_cos(angle);
  printf("cosx = %f\n",cos_x);
  sum=series_sum();
  printf("SUM = %f\n",sum);

  return 0;
}

double series_sin(float angle){
  int count,sign;
  double s,last,current;
  count=1;
  sign=2;
  current=2;
  s=0;
  do{
    last=current;
    current=(pow(-1,sign)*pow(angle,count)/factorial(count));
    // printf("%f\n",current);
    s=s+current;
    count=count+2;
    sign=sign+1;
  }while(last-current>0.00001);

  return s;
}

double series_cos(float angle){
  int count,sign;
  double s,last,current;
  count=2;
  sign=1;
  current=2;
  s=0;
  do{
    last=current;
    current=1+(pow(-1,sign)*pow(angle,count)/factorial(count));
    // printf("%f\n",current);
    s=s+current;
    count=count+2;
    sign=sign+1;
  }while(last-current>0.00001);

  return s;
}

double series_sum(){
  int count=1;
  double s,last,current;
  // last=1;
  current=2;
  s=0;
  do{
    last=current;
    current=pow((1.0/count),count);
    // printf("%f\n",current);
    s=s+current;
    count+=1;
  }while(last-current>0.00001);

  return s;
  
}

int factorial(int n){
  if(n<=1){
    return 1;
  }
  return n*factorial(n-1);
}