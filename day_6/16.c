#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;
    int j = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    size = removeDuplicates(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
