#include <stdio.h>

void setOddIndicesToZero(int arr[], int size) {
    for (int i = 1; i < size; i += 2) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    setOddIndicesToZero(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
