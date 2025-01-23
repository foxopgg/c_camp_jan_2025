#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("Enter income: ");
    scanf("%f", &income);

    if (income <= 50000) {
        tax = 0;
    } else if (income <= 100000) {
        tax = (income - 50000) * 0.1;
    } else {
        tax = (50000 * 0.1) + (income - 100000) * 0.2;
    }

    printf("Tax = $%.2f\n", tax);

    return 0;
}
