#include <stdio.h>

void replaceWithNearestEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] += (arr[i] > 0) ? 1 : -1;
        }
    }
}

int main() {
    int arr[] = {3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithNearestEven(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
