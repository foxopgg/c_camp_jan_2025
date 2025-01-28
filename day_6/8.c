#include <stdio.h>

void insertAtPosition(int arr[], int size, int value, int pos) {
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
}

int main() {
    int arr[5] = {1, 2, 3};
    int size = 3;
    int value = 5;
    int pos = 2;
    insertAtPosition(arr, size, value, pos);
    size++;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
