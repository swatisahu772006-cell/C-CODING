//find factorial of number
int main() {
    int num = 6;

    printf("Factorial of %d is: %d\n", num, fact(num));

    return 0;
}

int fact(int n) {
    int i, factorial = 1;

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    return factorial;
}
