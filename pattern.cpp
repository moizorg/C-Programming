#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 5; i++) { // Rows
        for (j = 0; j <= i; j++) { // Columns
            printf("%d ", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
