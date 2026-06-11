#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    //TERNARY 
    (age>18)?printf("adult\n"):printf("not adult\n");
}