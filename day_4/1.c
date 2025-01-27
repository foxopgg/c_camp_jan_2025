#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    bool allPrime = true;

    for (int i = start; i <= end; i++) {
        if (!isPrime(i)) {
            printf("Output: %d\n", i);
            allPrime = false;
            break;
        }
    }

    if (allPrime) {
        printf("Output: All Prime\n");
    }

    return 0;
}
