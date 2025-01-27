#include <stdio.h>

void sortByLastDigit(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((arr[i] % 10) > (arr[j] % 10)) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {21, 43, 35, 62};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortByLastDigit(arr, size);

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
