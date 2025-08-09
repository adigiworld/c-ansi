#include<stdio.h>

// Manchester

int main(void){
  char string1[80],string2[80];
  int i;
  printf("Enter a string \n");
  printf("?");
  scanf("%s",string2);
  for(i=0; string2[i]!='\0'; i+=1){
    string1[i]=string2[i];
  }
  string1[i]='\n';
  printf("\n");
  printf("%s",string1);
  printf("Number of character = %d\n",i);

  return 0;
}