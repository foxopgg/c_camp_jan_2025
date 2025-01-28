#include <stdio.h>

void alternatePositiveNegative(int arr[], int size) {
    int posIndex = 0;
    int negIndex = 1;
    while (posIndex < size && negIndex < size) {
        while (posIndex < size && arr[posIndex] > 0) {
            posIndex += 2;
        }
        while (negIndex < size && arr[negIndex] < 0) {
            negIndex += 2;
        }
        if (posIndex < size && negIndex < size) {
            int temp = arr[posIndex];
            arr[posIndex] = arr[negIndex];
            arr[negIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    alternatePositiveNegative(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
