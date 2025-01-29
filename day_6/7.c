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
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    
    printf("Output : ");
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf(" ]");
    return 0;
}
