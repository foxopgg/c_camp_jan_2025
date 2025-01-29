#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("INPUT : [ ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf(" ]");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr[i]++;
        }
    }
    printf("Output :");
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf(" ]");
    return 0;
}
