#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", a, b);

    for (int i = a; i <= b; i++) {
        int isPrime = 1;

        if (i < 2) // 0 and 1 are not prime
            continue;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
