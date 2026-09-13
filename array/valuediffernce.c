//find the difference between the sum of the elements at even indices to the sum of the element at odd indices

#include<stdio.h>
int main(){
    int arr[6]={2,4,6,8,10,12};
    int sumeven=0,sumodd=0; //int diff;
    for(int i=0;i<=5;i++){
        if(i%2!=0){
            sumeven+=arr[i];
        }
        else
            {
                sumodd+=arr[i];
            }
        }
    printf("sum of even:%d\n",sumeven);
    printf("sum of odd:%d\n",sumodd);
    int diff=sumeven-sumodd;
    printf("differnce is:%d",diff);
}