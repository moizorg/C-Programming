#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0.0, square_root = 0.0;

    printf("Enter a number: ");
    scanf("%lf", &x);

    if (x >= 0) {
        square_root = sqrt(x);
        printf("Square root of %.1lf = %.1lf\n", x, square_root);
    } else {
        printf("Square root cannot be calculated\n");
    }

    return 0;
}
