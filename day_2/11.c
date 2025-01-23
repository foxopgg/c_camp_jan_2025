#include <stdio.h>

int main() {
    int units, bill = 0;
    printf("Enter the number of units: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1;
    } else if (units <= 300) {
        bill = 100 * 1 + (units - 100) * 2;
    } else {
        bill = 100 * 1 + 200 * 2 + (units - 300) * 3;
    }

    printf("Bill = $%d\n", bill);

    return 0;
}
