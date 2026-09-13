#include<stdio.h>
int main()
{
   int arr[2][10];
    printf("Table of 2:");
    for (int i=1; i<=10; i++)
    { 
        int table =2*i;
        printf("%d*%d=%d\n", 2, i, table);
    }

    printf("Table of 3:");
    for (int i =1; i<=10; i++)
    {    
        int table =3*i;
        printf("%d*%d=%d\n", 3,i, table);
    }
    return 0;
}
