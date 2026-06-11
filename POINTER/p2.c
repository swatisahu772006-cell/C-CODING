#include<stdio.h>
int main()
{
int price=560;
int *ptr=&price;

printf("%d\n",price);
printf("%d\n",*ptr);
int **pptr=&ptr;
printf("%d\n",**pptr);

}
//
#include<stdio.h>
int main(){
    int i=4;
    int*ptr=&i;
    int **pptr=&ptr;
    printf("%d",**pptr);
}
