#include <stdio.h>

void replaceWithRank(int arr[], int size) {
    int sortedArr[size];
    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                int temp = sortedArr[j];
                sortedArr[j] = sortedArr[j + 1];
                sortedArr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == sortedArr[j]) {
                arr[i] = j + 1;
                break;
            }
        }
    }
}

int main() {
    int arr[] = {40, 10, 30, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceWithRank(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
