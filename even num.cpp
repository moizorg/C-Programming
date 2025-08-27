#include <stdio.h>

int main() {
    int count = 0, num = 2;

    printf("First 15 even numbers:\n");
    while (count < 15) {
        printf("%d ", num);
        num += 2;
        count++;
    }

    return 0;
}
