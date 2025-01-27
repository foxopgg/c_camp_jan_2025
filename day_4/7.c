#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    int found = 0; // Flag to track if a valid digit is found

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        num /= 10;        // Remove the last digit

        if (digit % 3 != 0) {
            continue; // Skip if the digit is not divisible by 3
        }
        if (digit == 6) {
            continue; // Skip if the digit is 6
        }

        printf("Output: %d\n", digit);
        found = 1;
        break; // Stop once a valid digit is found
    }

    if (!found) {
        printf("Output: No valid digit\n");
    }

    return 0;
}
