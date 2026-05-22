//wap enter number is divisible by 7 otherwise print thankyou

#include<stdio.h>
    int main(){
    int n;
    do{
        printf("enter number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7!=0){
            break;
        }}

        while(n%7==0);
        printf("thankyou");
        return 0;}