#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) { // Outer loop for rows
        for (int j = 1; j <= 5; j++) { // Inner loop for columns
            int result = i * j;

            if (result > 10) {
                break; // Stop the row if the result exceeds 10
            }
            if (result % 3 == 0) {
                continue; // Skip entries divisible by 3
            }

            printf("%d ", result); // Print the result
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
