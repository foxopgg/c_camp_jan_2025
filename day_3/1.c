#include <stdio.h>

int main() {
    float bill, finalBill;

    // Input the bill amount
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    // Apply discount based on the bill amount
    if (bill <= 500) {
        finalBill = bill;  // No discount
    } else if (bill > 500 && bill <= 1000) {
        finalBill = bill * 0.90;  // 10% discount
    } else {
        finalBill = bill * 0.80;  // 20% discount
    }

    // Output the final bill
    printf("Final Bill Amount: ₹%.2f\n", finalBill);

    return 0;
}
