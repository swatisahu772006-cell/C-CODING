#include<stdio.h>
int main(){
int n; 
printf("enter n:");
 scanf("%d",&n);
for(int i=10;i>=1;i--)
{
int table=n*i;
printf("%d*%d:%d\n",n,i,table);
}

}