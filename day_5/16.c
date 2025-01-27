#include <stdio.h>

void evenFirst(int arr[], int size) {
    int temp[size], k = 0;

    // Collect even numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            temp[k++] = arr[i];
        }
    }
    // Collect odd numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            temp[k++] = arr[i];
        }
    }
    // Copy back to original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {7, 2, 4, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    evenFirst(arr, size);

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
