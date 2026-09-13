// write a program to print smallest of two no.
#include<stdio.h>
int main(){
    int a,b,small;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    small=a<b;
    printf("small no is : %d",small);

}