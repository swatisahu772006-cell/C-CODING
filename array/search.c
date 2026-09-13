#include<stdio.h>
int main(){
    int arr[7]={1,5,8,5,4,65,84};
    int x=6;
    int count=0;//mean not present
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            count=1;// 1 mean element is present
            break;
        }}
        if(count==1){
            printf("%d IS PRESENT",x);
        }
        else
            printf(" %d IS NOT PRESENT",x);
        }
