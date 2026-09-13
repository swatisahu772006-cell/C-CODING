//wap to reverse a array
#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<=4;i++){
        printf("enter element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("array is:");
    for(int i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}