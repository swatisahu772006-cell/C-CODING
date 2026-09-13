#include<stdio.h>
int main(){
    int arr[]={2,3,4,8,5,1,6};
    int totalpairs=0;
    int x=9;
    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            for(int k=j+1;k<=5;k++){
        if(arr[i]+arr[j]+arr[k]==x){
            totalpairs++;
            printf("pairs are:(%d,%d,%d)\n",arr[i],arr[j],arr[k]);}
    }
}
} 
printf("no of pair x:%d",totalpairs);}