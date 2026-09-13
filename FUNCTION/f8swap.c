#include<stdio.h>
void swap(int a,int b);
int main(){
    int a=66;
    int b=89;
    int t;
    swap(a,b);
}
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;    
    printf("a=%d\nb=%d",a,b);

}