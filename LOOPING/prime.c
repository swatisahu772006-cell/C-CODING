#include<stdio.h>
int main(){
    int i,n;
    printf("enter number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0){
            printf("not prime number\n");
        break;
        }
    }
    if(i==n)
    {
        printf("prime");
    }
    else if (n<=1)
    {
    printf("not a prime");
    }
    return 0;
}