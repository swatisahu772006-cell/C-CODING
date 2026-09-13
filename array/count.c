#include<stdio.h>
int main(){
    int arr[]={2,3,5,8,9,3,5,10};
    int count=0; 
    int x=6;
    for(int i=0;i<=7;i++){
        if(arr[i]>x){
            count++;
        }
    }
     printf("count number grater than x:%d",count);

}
