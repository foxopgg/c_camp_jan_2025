#include <stdio.h>

int main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        num /= 10;        // Remove the last digit

        // Skip digits 7 and 9
        if (digit == 7 || digit == 9) {
            continue;
        }

        // Append the digit to the reversed number
        reversed = reversed * 10 + digit;
    }

    printf("Reversed number (excluding 7 and 9): %d\n", reversed);
    return 0;
}
