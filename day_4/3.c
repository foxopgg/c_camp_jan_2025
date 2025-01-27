#include <stdio.h>

int main() {
    int sum = 0, count = 0;

    for (int i = 1; i <= 100; i += 2) { // Loop through odd numbers
        sum += i;
        count++;

        if (sum > 500) { // Stop if sum exceeds 500
            break;
        }
    }

    printf("Sum = %d, Numbers Summed = %d\n", sum, count);
    return 0;
}
