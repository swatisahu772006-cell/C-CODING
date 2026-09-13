#include<stdio.h>
int main(){
    int table[1][10];
    int n;
    printf("table is:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int table=n*i;
        printf("%d*%d:%d\n",n,i,table);
}
    }
