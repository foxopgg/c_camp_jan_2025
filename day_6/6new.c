#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int arr[], int size) {
    if (size == 0) return;

    int first = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}
int main() {
    int *arr = NULL;
    int size = 0, num;
    printf("Enter elements (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        arr = (int *)realloc(arr, (size + 1) * sizeof(int));
        if (arr == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        arr[size] = num;
        size++;
    }
    if (size == 0) {
        printf("No elements entered.\n");
        return 0;
    }
    shiftLeft(arr, size); 
    printf("Array after left shift: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
