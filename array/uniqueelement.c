#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {1, 6, 4, 1, 4};

    //int arr[7]={3,3,8,4,1,4,1};
    for(int i=0;i<=6;i++){
        bool flag = false;
        for(int j=0;j<=6;j++){
        if(i != j &&arr[i]==arr[j]){
             flag = true;
            }
        }
        if(flag==false){
            printf("%d\n",arr[i]);
            break;
        
        }
    }
    }
        