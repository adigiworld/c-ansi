#include<stdio.h>

struct stores{
  char name[20];
  float price;
  int quantity;
};

int main(void){
  void update(struct stores *,float,int);
  float mul(struct stores *stock);
  float p_increment,value;
  int q_increment;
  struct stores item={"XYZ",25.75,12};
  struct stores *ptr=&item;

  printf("\nInput increment values: ");
  printf(" price increment and quantity increment\n");
  scanf("%f %d",&p_increment,&q_increment);

  update(&item,p_increment,q_increment);
  printf("Updated values of item\n\n");
  printf("Name       : %s\n",ptr->name );
  printf("Price      : %f\n",ptr->price);
  printf("Quantity   : %d\n",ptr->quantity);
  value=mul(&item);
  printf("\nValue of the item = %f\n",value);

  return 0;
}

void update(struct stores *product,float p,int q){
  product->price+=p;
  product->quantity+=q;
}

float mul(struct stores *stock){
  return (stock->price*stock->quantity);
}