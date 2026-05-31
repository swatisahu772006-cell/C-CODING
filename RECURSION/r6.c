// calculate percentage

#include<stdio.h>
int calpercentage( int sci,int m,int san);

int main(){
    int sci=77;
    int m=83;
    int san=92;
    printf("percentage will be:%d",calpercentage(sci,m,san));
}
int calpercentage(int sci,int m,int san){
    int t=((sci+m+san)/3);
    return t;
}