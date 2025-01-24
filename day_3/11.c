#include <stdio.h>
#include <string.h>

int main() {
    float bill, finalPrice;
    char day[10];

    // Input bill amount and day
    printf("Enter bill amount: ");
    scanf("%f", &bill);
    printf("Enter day (e.g., Monday, Saturday): ");
    scanf("%s", day);

    if (bill > 10000) {
        finalPrice = bill * 0.80;  // 20% discount
    } else if (bill >= 5000 && bill <= 10000) {
        finalPrice = bill * 0.90;  // 10% discount
    } else if (bill < 5000 && (strcmp(day, "Saturday") == 0 || strcmp(day, "Sunday") == 0)) {
        finalPrice = bill * 1.05;  // 5% surcharge
    } else {
        finalPrice = bill;  // No change
    }

    printf("Final Price: ₹%.2f\n", finalPrice);

    return 0;
}
