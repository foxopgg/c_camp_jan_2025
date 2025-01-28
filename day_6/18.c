#include <stdio.h>

void reverseGroup(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseGroups(int arr[], int size, int k) {
    for (int i = 0; i < size; i += k) {
        int end = (i + k - 1 < size) ? (i + k - 1) : (size - 1);
        reverseGroup(arr, i, end);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    reverseGroups(arr, size, k);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
