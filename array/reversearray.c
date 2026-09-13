//wap to reverse array 
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }}

   /* return 0;
    int arr[] = {10, 20, 30, 40, 50, 60};

    for( int i = 0; i<n ; i++){
        if (arr[i] != arr[n-1-i])
        {
           return 0; 
        }
        
    }
    return 1 ;
}

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 30, 20, 10};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i<n ; i++){
        if (arr[i] != arr[n-1-i])
        {
            printf(" not a palindrone");
        
        }
    }
    if(i==n)
    {
        printf("palindrone");
    }
}*/