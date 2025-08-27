#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fib[n]; // Array to store Fibonacci numbers

    // Generate Fibonacci series
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print in reverse
    printf("Fibonacci Series in Reverse: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", fib[i]);
    }

    return 0;
}
