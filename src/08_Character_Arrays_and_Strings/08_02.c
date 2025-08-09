#include<stdio.h>

int main(void){
  char line[81],character;
  int c;
  c=0;
  printf("Enter text. Press <Return> at end\n");
  do{
    character=getchar();
    line[c]=character;
    c+=1;
  }while(character!='\n');
  // c=c-1;
  // line[c]='\n';
  printf("\n%s\n",line);

  return 0;
}