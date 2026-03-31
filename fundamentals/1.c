#include<stdio.h>
#include<unistd.h>

int main(){
    write(1,"Hello World!\n",14);
    int num = 37;
    printf("The number si : %d\n",num);

    return 0;
}
