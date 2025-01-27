#include <stdio.h>

void sortByRemainder(int arr[], int size, int k) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((arr[i] % k) > (arr[j] % k)) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    sortByRemainder(arr, size, k);

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
