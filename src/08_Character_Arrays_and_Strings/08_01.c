#include<stdio.h>

// Oxford Road, London M17ED
// Oxford-Road, London-M17ED United Kingdom

int main(void){
  char word1[40],word2[40],word3[40],word4[40];
  printf("Enter text : \n");
  scanf("%s %s",word1,word2);
  scanf("%s",word3);
  scanf("%s",word4);
  printf("\n");
  printf("Word1 = %s\nWord2 = %s\n",word1,word2);
  printf("Word3 = %s\nWord4 = %s\n",word3,word4);

  return 0;
}