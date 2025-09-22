#include <stdio.h>
#include <math.h>  // for sqrt

int is_prime(int n) {
    if (n < 2) return 0;  // not prime

    int limit = (int)sqrt(n);
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return 0; // divisible = not prime
        }
    }
    return 1; // prime
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2) {
        printf("Error: n must be >= 2.\n");
        return 1;
    }

    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
