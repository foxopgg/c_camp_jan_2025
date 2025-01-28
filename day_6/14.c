#include <stdio.h>

void cumulativeSum(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cumulativeSum(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
