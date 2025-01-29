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
    int pos;
    printf("Enter position to remove (0 to %d): ", n - 1);
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Output : ");
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf(" ]");
    return 0;
}
