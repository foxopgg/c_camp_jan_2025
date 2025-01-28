#include <stdio.h>

void replaceGreaterThan(int arr[], int size, int threshold, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold) {
            arr[i] = value;
        }
    }
}

int main() {
    int arr[] = {1, 5, 2, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int threshold = 3;
    int value = 0;
    replaceGreaterThan(arr, size, threshold, value);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
