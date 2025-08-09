#include<stdio.h>
#include<string.h>

#define CUSTOMERS 10

/*
Gottfried Wilhelm Leibniz 711518
Joseph Louis Lagrange 869245
Jean Robert Argand 900823
Carl Freidrich Gauss 806788
Simon Dennis Poisson 853240
*/
int main(void){
  char first_name[20][10],second_name[20][10],surname[20][10],name[20][20],
  telephone[20][10],dummy[20];
  int i,j;
  printf("Input names and telephone numbers \n");
  printf("? ");
  for(i=0;i<CUSTOMERS;i+=1){
    scanf("%s %s %s %s",first_name[i],second_name[i],surname[i],telephone[i]);
    strcpy(name[i],surname[i]);
    strcat(name[i],",");
    dummy[0]=first_name[i][0];
    dummy[1]='\0';
    strcat(name[i],dummy);
    strcat(name[i],",");
    dummy[0]=second_name[i][0];
    dummy[1]='\0';
    strcat(name[i],dummy);
  }
  for(i=1;i<CUSTOMERS;i+=1){
    for(j=1;j<=CUSTOMERS-i;j+=1){
      if(strcmp(name[j-1],name[j])>0){
        strcpy(dummy,name[j-1]);
        strcpy(name[j-1],name[j]);
        strcpy(name[j],dummy);

        strcpy(dummy,telephone[j-1]);
        strcpy(telephone[j-1],telephone[j]);
        strcpy(telephone[j],dummy);
      }
    }
  }
  printf("\nCUSTOMERS LIST IN ALPHABETICAL ORDER \n\n");
  for(i=0;i<CUSTOMERS;i+=1){
    printf(" %-20s\t %-10s\n",name[i],telephone[i]);
  }

  return 0;
}
