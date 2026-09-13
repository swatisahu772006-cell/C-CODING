//wap to print the sum of element in a array
#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<=4;i++){
    printf("enter elements:\n");
    scanf("%d",&arr[i]);
}
    int sum =0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];    
    }
    printf("sum of array elemrnt:%d",sum);
}
