#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Output: %d\n", -num);  // Positive to negative
    } else if (num < 0) {
        printf("Output: %d\n", -num);  // Negative to positive
    } else {
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0 && i % 5 == 0) {
                printf("Output: %d\n", i);
                break;
            }
        }
    }

    return 0;
}
