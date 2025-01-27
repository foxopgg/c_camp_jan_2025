#include <stdio.h>

void cumulativeProduct(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        arr[i] *= arr[i - 1];
    }
}

int main() {
    int arr[] = {2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cumulativeProduct(arr, size);

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
