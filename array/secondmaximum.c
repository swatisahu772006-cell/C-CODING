
//own
//wap to print first and second maximum number
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={10,52,97,65,78,98,23,56,106};
    int max1=arr[0];
    int max2=arr[1];
    for(int i=1;i<=8;i++){
        if(max1<arr[i]){
            max1=arr[i];
                }
            }
    for(int i=0;i<=8;i++){
        if(max1>arr[i])  
         {         
        if(max2<arr[i])
        {
            max2=arr[i];
                }}}
    printf("first maximum number is:%d\n",max1);
    printf(" second maximum number is:%d",max2);
} 
