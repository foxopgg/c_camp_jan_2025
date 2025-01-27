#include <stdio.h>

void alternateSigns(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 != 0) {
            arr[i] = -arr[i]; // Make odd-indexed elements negative
        }
    }
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    alternateSigns(arr, size);

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
