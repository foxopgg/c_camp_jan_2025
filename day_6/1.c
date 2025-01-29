#include <stdio.h>

void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("INPUT : [ ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf(" ]");
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("OUTPUT :");
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]");
    return 0;
}

