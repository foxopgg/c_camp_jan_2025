#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Squared array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }

    return 0;
}