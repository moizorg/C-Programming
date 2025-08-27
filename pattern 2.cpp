#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 6; i++) {
        printf("%d %d\n", i, 1 << i); // 1 << i means 2^i
    }

    return 0;
}
