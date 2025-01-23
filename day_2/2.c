#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end, sum = 0;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("Sum of primes = %d\n", sum);

    return 0;
}
