#include <stdio.h>

int main() {
    int x, y, result = 1;
    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < y; i++) {
        result *= x; // Multiply `result` by `x`, `y` times
    }

    printf("Result = %d\n", result);
    return 0;
}
