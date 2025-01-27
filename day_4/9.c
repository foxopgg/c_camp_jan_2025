#include <stdio.h>

int main() {
    int n, threshold, sum = 0;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the threshold: ");
    scanf("%d", &threshold);

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            continue; // Skip negative numbers
        }
        sum += arr[i];
        if (sum >= threshold) {
            printf("Sum = %d, Stopped at %d\n", sum, arr[i]);
            return 0;
        }
    }

    printf("Sum = %d, Threshold not reached.\n", sum);
    return 0;
}
