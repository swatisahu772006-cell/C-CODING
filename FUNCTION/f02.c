// Function definition: prints the multiplication table
void printTable(int num) {
    // Print a header for the table
    printf("\nMultiplication Table for %d:\n", num);
    
    // Use a for loop to iterate from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        // Print each line of the table in a formatted way
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// print table
#include<stdio.h>
 void printtable();
 int main() 
 {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printtable(n);// argument/actual parameter

 }

 void printtable(int n){ //parameter
    for(int i=1;i<10;i++){
    printf("%d x %d = %d\n", n, i, n * i);
    }
 }
 