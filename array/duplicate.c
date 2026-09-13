#include<stdio.h>
//#include<limits.h>
int main(){
    int arr[]={52,97,10,78,65,11,11,52};
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++)
        if(arr[i]==arr[j]){
            printf("duplicate number is:%d\n",arr[i]);
            break;
        }
    }
    }
        


