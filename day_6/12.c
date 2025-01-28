#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void replacePrimes(int arr[], int size, int replacement) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            arr[i] = replacement;
        }
    }
}

int main() {
    int arr[] = {2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int replacement = -1;
    replacePrimes(arr, size, replacement);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
