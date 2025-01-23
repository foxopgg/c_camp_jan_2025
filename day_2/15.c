#include <stdio.h>

int main() {
    int liters, bill = 0;
    printf("Enter the amount of water used (in liters): ");
    scanf("%d", &liters);

    if (liters <= 50) {
        bill = 0;
    } else if (liters <= 150) {
        bill = (liters - 50) * 1;
    } else {
        bill = (100 * 1) + (liters - 150) * 2;
    }

    printf("Water bill = $%d\n", bill);

    return 0;
}
