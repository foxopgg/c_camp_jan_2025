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

    int is_palindrome = 1;
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome) {
        printf("Array is a palindrome\n");
    } else {
        printf("Array is not a palindrome\n");
    }

    return 0;
}