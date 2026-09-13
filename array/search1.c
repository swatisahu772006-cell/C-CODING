#include<stdio.h>
int main(){
    int arr[7]={1,5,8,5,4,65,84};
    int x=5;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf(" %d is present in the array",x);
            break;
        }
    }}