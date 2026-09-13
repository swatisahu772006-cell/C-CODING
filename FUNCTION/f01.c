#include<stdio.h>

// Function declaration (prototype)
void printTable(int num);

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number to print its multiplication table: ");
    
    // Read and store the number from the user
    scanf("%d", &num);

    // Call the function, passing the input number as an argument
    printTable(num);

    return 0;
}
