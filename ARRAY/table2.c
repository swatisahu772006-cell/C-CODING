#include<stdio.h>
void storetable(int arr[][10],int n,int m,int number);

int main(){
    int tables[2][10];
    storetable(tables,0,10,2);//arr[][10]
    storetable(tables,1,10,3);

    
}

void storetable(int arr[][10],int n,int m,int number)
{
    for(int i=0;i<m;i++ ){
        arr[n][i]=number*(i+1);
        printf("%d\t",arr[n][i]);
        printf("\n");
    }
 }


 