#include<stdio.h>

// Product => 11 15 12 14 13 13 13 14 15 12 12 16 10 15 14 14 11 15 13 12
// Sale    => 10 13 09 12 11 12 10 12 14 10 11 14 10 14 12 12 10 13 11 10
// Cost    => 10 20 30 15 25

int main(void){
  int M[5][6],S[5][6],C[6],
  Mvalue[5][6],Svalue[5][6],Mweek[5],Sweek[5],
  Mproduct[6],Sproduct[6],Mtotal,Stotal,i,j,number;
  // Input data
  printf(" Enter product manufactured week_wise \n");
  printf(" M11, M12, --, M21, M22, --, -- etc\n");
  for(i=1;i<=4;i+=1){
    for(j=1;j<=5;j+=1){
      scanf("%d",&M[i][j]);
    }
  }
  printf(" Enter product sold week_wise \n");
  printf(" S11, S12, --, S21, S22, --, -- etc\n");
  for(i=1;i<=4;i+=1){
    for(j=1;j<=5;j+=1){
      scanf("%d",&S[i][j]);
    }
  }
  printf(" Enter cost of each product \n");
  for(j=1;j<=5;j+=1){
    scanf("%d",&C[j]);
  }
  // Value matrix of product and Sales
  for(i=1;i<=4;i+=1){
    for(j=1;j<=5;j+=1){
      Mvalue[i][j]=M[i][j]*C[j];
      Svalue[i][j]=S[i][j]*C[j];
    }
  }
  // Total value of weekly production and sale
  for(i=1;i<=4;i+=1){
    Mweek[i]=0;
    Sweek[i]=0;
    for(j=1;j<=5;j+=1){
      Mweek[i]+=Mvalue[i][j];
      Sweek[i]+=Svalue[i][j];
    }
  }
  // Monthly value of product_wise production and sales
  for(j=1;j<=5;j+=1){
    Mproduct[j]=0;
    Sproduct[j]=0;
    for(i=1;i<=4;i+=1){
      Mproduct[j]+=Mvalue[i][j];
      Sproduct[j]+=Svalue[i][j];
    }
  }
  // Grand total of production and sales values
  Mtotal=Stotal=0;
  for(i=1;i<=4;i+=1){
    Mtotal+=Mweek[i];
    Stotal+=Sweek[i];
  }
  // Selection and printing of information required
  printf("\n\n");
  printf(" Following is the list of things you can\n");
  printf(" request for. Enter appropriate item number\n");
  printf(" and press RETURN Key\n\n");
  printf(" 1.Value matrices of production & sales\n");
  printf(" 2.Total value of weekly production & sales\n");
  printf(" 3.Product_wise monthly value of production & sales\n");
  printf(" 4.Grand total value of production & sales\n");
  printf(" 5.Exit\n");
  number=0;
  while(1){
    printf("\n\n ENTER YOUR CHOICE: ");
    scanf("%d",&number);
    printf("\n");
    if(number==5){
      printf(" G O O D  B Y E\n\n");
      break;
    }
    switch (number)    {
      case 1:
        printf(" VALUE MATRIX OF PRODUCTION\n\n");
        for(i=1;i<=4;i+=1){
          printf(" Week(%d)\t",i);
          for(j=1;j<=5;j+=1){
            printf("%7d",Mvalue[i][j]);
          }
          printf("\n");
        }
        printf("\n VALUE MATRIX OF SALES\n\n");
        for(i=1;i<=4;i+=1){
          printf(" Week(%d)\t",i);
          for(j=1;j<=5;j+=1){
            printf("%7d",Svalue[i][j]);
          }
          printf("\n");
        }
        break;
      case 2:
        printf(" TOTAL WEEKLY PRODUCTION & SALES\n\n");
        printf("              PRODUCTION   SALES\n");
        printf("              ----------   -----\n");
        for(i=1;i<=4;i+=1){
          printf(" Week(%d)\t",i);
          printf("%7d\t%7d\n",Mweek[i],Sweek[i]);
        }
        break;
      case 3:
        printf(" PRODUCT_WISE TOTAL PRODUCTION & SALES\n\n");
        printf("              PRODUCTION   SALES\n\n");
        printf("              ----------   -----\n\n");
        for(j=1;j<=5;j+=1){
          printf(" Product(%d)\t",j);
          printf("%7d\t%7d\n",Mproduct[j],Sproduct[j]);
        }
        break;
      case 4:
        printf(" GRAND TOTAL OF PRODUCTION & SALES\n\n");
        printf(" Total production = %d\n",Mtotal);
        printf(" Total sale = %d\n",Stotal);
        break;
      default:
        printf(" Wrong choice, select again\n\n");
        break;
    }
  }
  printf(" Exit from the program\n\n");

  return 0;
}