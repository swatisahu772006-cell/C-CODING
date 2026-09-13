#include<stdio.h>
int main(){
    int array[4];
    for(int i=0;i<=3;i++){
        printf("enter element number %d :",i);
       scanf("%d",&array[i]);
    }
    printf("array is:");
    for(int i=0;i<=3;i++){
    printf("%d ",array[i]);
}
}

