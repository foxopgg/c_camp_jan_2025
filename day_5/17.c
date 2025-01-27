#include <stdio.h>

void sortAndRemoveDuplicates(int arr[], int size) {
    // Sort array
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Remove duplicates
    int temp[size], k = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            temp[k++] = arr[i];
        }
    }

    // Copy unique elements back
    printf("Output: [");
    for (int i = 0; i < k; i++) {
        printf("%d", temp[i]);
        if (i < k - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int arr[] = {4, 2, 2, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortAndRemoveDuplicates(arr, size);

    return 0;
}
