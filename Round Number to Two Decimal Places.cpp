#include <stdio.h>

int main() {
    float num;

    printf("Enter a positive number: ");
    scanf("%f", &num);

    // Round to two decimal places
    num = (int)(num * 100 + 0.5) / 100.0;

    printf("Rounded value: %.2f\n", num);
    return 0;
}
