#include<stdio.h>
int main(){
    int array[4];
    int flag = 1;
    for (int i=0;i<=3;i++){
        printf("enter element number %d ",i);
       scanf("%d",&array[i]);
    }
    for (int i=0;i<=4/2;i++)
    {
    if(array[i]!=array[4-1-i])
    {
        flag=0;
        break;
    }
    }
    if(flag)
        printf("palindrome");
    else
        printf("not palindrome");
    
}