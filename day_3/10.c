#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Converted Number: %d\n", -num);  // Positive to negative
    } else if (num < 0) {
        printf("Converted Number: %d\n", -num);  // Negative to positive
    } else {
        for (int i = 100; i >= 1; i--) {
            if (i % 3 == 0 && i % 7 == 0) {
                printf("Converted Number: %d\n", i);
                break;
            }
        }
    }

    return 0;
}
