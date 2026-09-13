//LOGICAL
//wap to to print firt max and second max num with single loop>
 #include <stdio.h>
int main() {
    int arr[7] = {106, 97, 120, 160,160,78,63};
//int n = sizeof(arr) / sizeof(arr[0]);
    int max1, max2;
    // Initialize max1 and max2
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }
    
// Find first and second maximum
    for (int i = 2; i <=6; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i]!= max1) {
            max2 = arr[i];
        }
    }
    printf("First maximum number is: %d\n", max1);
    printf("Second maximum number is: %d\n", max2);

    return 0;
}