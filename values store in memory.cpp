#include <stdio.h>

int main() {
    char ch1, ch2;
    float num1;
    int num2;

    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);

    printf("Enter a floating-point number: ");
    scanf("%f", &num1);

    num2 = 50; // assignment for last value

    printf("\nValues stored:\n");
    printf("Character 1: %c\n", ch1);
    printf("Character 2: %c\n", ch2);
    printf("Floating value: %e\n", num1);
    printf("Integer value: %d\n", num2);

    return 0;
}
