//wap to count number pair whose sum is equal to given value of x
#include<stdio.h>
int main(){
    int arr[]={2,3,4,8,5,1};
    int totalpairs=0;
    int x=5;
    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
        if(arr[i]+arr[j]==x){
            totalpairs++;
            printf("pairs are:(%d,%d)\n",arr[i],arr[j]);
    }
}
} 
printf("no of pair x:%d",totalpairs);
}