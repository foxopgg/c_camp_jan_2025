#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int reversed = 0, original = num, digit;
    while (num > 0) {
        digit = num % 10;       // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10;             // Remove the last digit
    }
    return original == reversed; // Compare original and reversed
}

int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 1000) {
            continue; // Skip numbers greater than 1000
        }
        if (isPalindrome(arr[i])) {
            printf("First Palindrome: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No palindrome found within the criteria.\n");
    return 0;
}
