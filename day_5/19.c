#include <stdio.h>
#include <stdbool.h>

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {4, 2, 2, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicates(arr, size)) {
        printf("Output: Duplicates: Yes\n");
    } else {
        printf("Output: Duplicates: No\n");
    }

    return 0;
}
