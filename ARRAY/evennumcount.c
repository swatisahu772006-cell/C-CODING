//count number of odd number
#include<stdio.h>

int countoddnum(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int result = countoddnum(arr, 10);
    printf("Number of even elements: %d\n", result);
    return 0;
}
int countoddnum(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){ 
            count++;
    }
}

     return count;
}


