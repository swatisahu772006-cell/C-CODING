
#include <stdio.h>

void table(int arr[][10], int n, int num){
    for(int i=0; i<10; i++){
        arr[n][i] = num * (i+1);
    }
} 

int main(){
    int arr[2][10];
    table(arr,0,2);
    table(arr,1,3);

    printf("Table of 2:");
    for (int i = 0; i <10; i++)
    {
        printf("%d*%d=%d\n", 2, i+1, arr[0][i]);
    }

    printf("Table of 3:");
    for (int i = 0; i <10; i++)
    {
        printf("%d*%d=%d\n", 3, i+1, arr[1][i]);
    }
    return 0;
}
