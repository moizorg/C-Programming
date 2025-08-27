#include <stdio.h>

int main() {
    int num = 2, count = 0;

    while (count < 15) {
        int isPrime = 1; // Assume prime
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number\n", num);
            count++;
        } else {
            printf("%d is Not a prime number\n", num);
        }

        num++;
    }

    return 0;
}
