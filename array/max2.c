//USE INT_MIN
//wap to print first and second max number 
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={106,97,120,89,160,85,65,200};
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];}
        else if(max2<arr[i]){
            max2=arr[i];
                }}
    printf("first maximum number is:%d",max1);
    printf(" second maximum number is:%d",max2);
} 
    
