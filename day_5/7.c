#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int search_element;
    printf("Enter element to count occurrences: ");
    scanf("%d", &search_element);

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == search_element) {
            count++;
        }
    }

    printf("Occurrences of element: %d\n", count);

    return 0;
}