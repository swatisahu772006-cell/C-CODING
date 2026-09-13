//wap to print maximum number in an array
#include<stdio.h>
int main(){
    int arr[]={10,52,97,65,78,98,23,56};
    int max=arr[0];
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
                }                
}
printf("maximum number is:%d",max);
}


           