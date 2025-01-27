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
    printf("Enter element to search: ");
    scanf("%d", &search_element);

    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == search_element) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element found in the array\n");
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}