#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2; // No need for `pow` function
    }

    printf("Decimal = %d\n", decimal);
    return 0;
}
