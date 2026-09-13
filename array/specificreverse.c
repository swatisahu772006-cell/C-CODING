//wap to reverse a with specific index
#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 1, j = 4; i <= j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

