#include <stdio.h>

// Function to compute GCD
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Remainder
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = GCD(num1, num2); // Function call

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
