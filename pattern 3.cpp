#include <stdio.h>

// Function to print the pattern
void Print_Asterisks() {
    int i, j;

    for (i = 6; i >= 1; i--) {  // Rows from 6 to 1
        for (j = 1; j <= i; j++) {  // Columns
            printf("*");
        }
        printf("\n"); // Move to next line
    }
}

int main() {
    // Function call
    Print_Asterisks();

    return 0;
}
