#include<stdio.h>
#include<string.h>

// Admiration is avery short-lived passion.
// Admiration involved a glorious obliquity of vision.
// Always we like those who admire us but we do note like those whom we admire.
// Fools admire, but men of sense approve.
// Make your own stuff.

int main(void){
  char line[81],ctr;
  int i,c,end=0,characters=0,words=0,lines=0;

  printf("KEY IN THE TEXT.\n");
  printf("GIVE ONE SPACE AFTER EACH WORD.\n");
  printf("WHEN COMPLETED, PRESS 'RETURN'.\n\n");
  
  while(end==0){
    c=0;
    while((ctr=getchar())!='\n'){
      line[c]=ctr;
      c+=1;
    }
    line[c]='\0';
    if(line[0]=='\0'){
      break;
    }else{
      words+=1;
      for(i=0;i<line[i]!='\0';i+=1){
        if(line[i]==' '||line[i]=='\t'){
          words+=1;
        }
      }
    }
    lines=lines+1;
    characters=characters+strlen(line);
  }

  printf("\n");
  printf("Number of lines = %d\n",lines);
  printf("Number of words = %d\n",words);
  printf("Number of characters = %d\n\n",characters);


  return 0;
}
