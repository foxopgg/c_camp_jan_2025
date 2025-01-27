#include <stdio.h>

int main() {
    int n, multiple;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the number for multiples: ");
    scanf("%d", &multiple);

    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = multiple * (i + 1);
    }

    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}