#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            continue; // Skip zeros
        }

        // Print the opposite sign
        printf("%d ", -arr[i]);
    }

    printf("\n");
    return 0;
}
