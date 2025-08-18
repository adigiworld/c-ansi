#include<stdio.h>
#include<string.h>

#define STUDENTS 5
#define SUBJECTS 4

void get_list(char *string[],int array[][SUBJECTS+1],int m,int n);
void set_sum(int array[][SUBJECTS+1],int m,int n);
void get_rank_list(char *string[],int array[][SUBJECTS+1],int m,int n);
void print_list(char *string[],int array[][SUBJECTS+1],int m,int n);
void swap_int(int *p,int *q);
void swap_string(char s1[],char s2[]);

/*
S.Laxmi 45 67 38 55
V.S.Rao 77 89 56 69
A.Gupta 66 78 98 45
S.Mani 86 72 0 25
R.Daniel 44 55 66 77
*/

int main(void){
  char name[STUDENTS][20];
  int marks[STUDENTS][SUBJECTS+1];
  printf("Input student names & their marks in four subjects\n");
  get_list(name,marks,STUDENTS,SUBJECTS);
  set_sum(marks,STUDENTS,SUBJECTS);
  printf("\n");
  print_list(name,marks,STUDENTS,SUBJECTS+1);
  get_rank_list(name,marks,STUDENTS,SUBJECTS+1);
  printf("\nRanked List\n\n");
  print_list(name,marks,STUDENTS,SUBJECTS+1);

  return 0;
}


void get_list(char *string[],int array[][SUBJECTS+1],int m,int n){
  int i,j,(*rowptr)[SUBJECTS+1]=array;
  for(i=0;i<m;i+=1){
    scanf("%s",string[i]);
    for(j=0;j<SUBJECTS;j+=1){
      scanf("%d",&(*(rowptr+i))[j]);
    }
  }
}

void set_sum(int array[][SUBJECTS+1],int m,int n){
  int i,j,(*rowptr)[SUBJECTS+1]=array;
  for(i=0;i<m;i+=1){
    (*(rowptr+i))[n-1]=0;
    for(j=0;j<n-1;j+=1){
      (*(rowptr+i))[n-1]+=(*(rowptr+i))[j];
    }
  }
}

void get_rank_list(char *string[],int array[][SUBJECTS+1],int m,int n){
  int i,j,k,(*rowptr)[SUBJECTS+1]=array;
  char *temp;
  for(i=1;i<m-1;i+=1){
    for(j=1;j<m-1;j+=1){
      if((*(rowptr+j-1))[n-1]<(*(rowptr+j))[n-1]){
        swap_string(string[j-1],string[j]);
        for(k=0;k<n;k+=1){
          swap_int(&(*(rowptr+j-1))[k],&(*(rowptr+j))[k]);
        }
      }
    }
  }
}

void print_list(char *string[],int array[][SUBJECTS+1],int m,int n){
  int i,j,(*rowptr)[SUBJECTS+1]=array;
  for(i=0;i<m;i+=1){
    printf("%-20s",string[i]);
    for(j=0;j<n;j+=1){
      printf("%5d",(*(rowptr+i))[j]);
    }
    printf("\n");
  }
}

void swap_int(int *p,int *q){
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
}

void swap_string(char s1[],char s2[]){
  char swap_area[256];
  int i;
  for(i=0;i<256;i+=1){
    swap_area[i]='\0';
  }
  i=0;
  while(s1[i]!='\0' && i<256){
    swap_area[i]=s1[i];
    i+=1;
  }
  i=0;
  while(s2[i]!='\0' && i<256){
    s1[i]=s2[i];
    s1[i]='\0';
    i+=1;
  }
  i=0;
  while(swap_area[i]!='\0'){
    s2[i]=swap_area[i];
    s2[i]='\0';
    i+=1;
  }
}