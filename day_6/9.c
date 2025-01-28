#include <stdio.h>

void removeAtPosition(int arr[], int size, int pos) {
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;
    removeAtPosition(arr, size, pos);
    size--;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
