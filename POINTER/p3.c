#include<stdio.h>
void square(int n);
void _square(int *n);
int main()
{
    int n=8;
    square(n);
    printf("number =%d",n);
    _square(&n);
    printf("number=%d\n",n);
}
void square(int n){
    n=n*n;
    printf("square=%d\n",n);
}

void _square(int*n)
{
*n=(*n)*(*n);
printf("square=%d\n",*n);

}