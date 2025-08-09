#include<stdio.h>
#include<string.h>

#define ITEMS 5
#define MAXCHAR 20

// London Manchester Delhi Paris Moscow

int main(void){
  char string[ITEMS][MAXCHAR],dummy[MAXCHAR];
  int i=0,j=0;
  printf("Enter names of %d items \n",ITEMS);
  while(i<ITEMS){
    scanf("%s",string[i]);
    i+=1;
  }
  for(i=1;i<ITEMS;i+=1){
    for(j=1;j<ITEMS;j+=1){
      if(strcmp(string[j-1],string[j])>0){
        strcpy(dummy,string[j-1]);
        strcpy(string[j-1],string[j]);
        strcpy(string[j],dummy);
      }
    }
  }
  printf("\nAlphabetic list\n\n");
  for(i=0;i<ITEMS;i+=1){
    printf("%s\n",string[i]);
  }

  return 0;
}