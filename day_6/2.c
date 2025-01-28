#include <stdio.h>

void replaceNegatives(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceNegatives(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
