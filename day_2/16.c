#include <stdio.h>

int main() {
    int ages[100], n, totalPrice = 0;
    float finalPrice;
    printf("Enter the number of people: ");
    scanf("%d", &n);

    printf("Enter the ages of the group: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] < 12) {
            totalPrice += 5;
        } else if (ages[i] >= 12 && ages[i] < 60) {
            totalPrice += 10;
        } else {
            totalPrice += 7;
        }
    }

    finalPrice = totalPrice;
    if (n >= 4) {
        finalPrice = totalPrice * 0.9; // Apply 10% discount
    }

    printf("Total Price = $%.2f\n", finalPrice);

    return 0;
}
