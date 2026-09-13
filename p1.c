#include<stdio.h>

int main(){
int n;
printf("enter n :");
scanf("%d", &n);
int arr[n];
int sum=0;
for(int i=1;i<=n;i++){
arr[i]=i+1;
}
for(int i=1;i<=n;i++){
if(arr[i]%2!=0){
sum=sum+arr[i];
}
else{
sum=sum-arr[i];}
}
printf("%d",sum);
}