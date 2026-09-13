//wap in an given array of integers ,change the value of all odd indexed element to its second multiple,
// and increment to its second multiple and increment all the even indexed value by 10
  #include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5,};
    for(int i=0;i<=4;i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }}
    for(int i=0;i<=4;i++)
    {
        printf("%d ",arr[i]);
    }

}