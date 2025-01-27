#include <stdio.h>

int main() {
    int stopNumber;
    printf("Enter a stop number (between 1 and 10): ");
    scanf("%d", &stopNumber);

    printf("Countdown:\n");
    for (int i = 10; i >= 1; i--) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        if (i == stopNumber) {
            printf("%d (Stopped due to stop number)\n", i);
            break; // Stop the countdown when the stop number is encountered
        }
        printf("%d ", i); // Print the current number
    }

    printf("\n");
    return 0;
}
