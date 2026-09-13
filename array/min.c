//wap to print maninimum number in an array
#include<stdio.h>
int main(){
    int arr[]={10,52,97,65,78,97,23,56};
    int min=arr[0];
    for(int i=1;i<=7;i++){
        if(min>arr[i]){
            min=arr[i];
                }
                
}printf("minimum number is:%d",min);}