#include <stdio.h>

int main() {
    int count = 0, num = 1;

    printf("First 15 odd numbers:\n");
    while (count < 15) {
        printf("%d ", num);
        num += 2;
        count++;
    }

    return 0;
}
