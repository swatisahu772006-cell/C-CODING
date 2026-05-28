//print table using function
#include<stdio.h>
 void printtable();
 int main() 
 {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printtable(n);

 }

 void printtable(int n){ 
    for(int i=1;i<10;i++){
    printf("%d x %d = %d\n", n, i, n * i);
    }
 }
 