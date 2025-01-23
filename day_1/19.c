#include <stdio.h>

int main() {
    int amount, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("100: %d\n", notes = amount / 100);
    amount %= 100;

    printf("50: %d\n", notes = amount / 50);
    amount %= 50;

    printf("20: %d\n", notes = amount / 20);
    amount %= 20;

    printf("10: %d\n", notes = amount / 10);
    amount %= 10;

    printf("5: %d\n", notes = amount / 5);
    amount %= 5;

    printf("1: %d\n", notes = amount / 1);

    return 0;
}
