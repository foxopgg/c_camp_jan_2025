#include <stdio.h>
#include <stdlib.h>

int main() {
    int usage;
    float billAmount;

    // Input usage
    printf("Enter Usage: ");
    scanf("%d", &usage);

    // Adjust negative usage
    if (usage < 0) {
        printf("Adjusted Usage: %d. ", abs(usage));
        usage = abs(usage);
    }

    // Calculate bill amount
    if (usage <= 100) {
        billAmount = usage * 5.0;  // ₹5/unit
    } else if (usage <= 500) {
        billAmount = 100 * 5.0 + (usage - 100) * 7.0;  // ₹7/unit for 101–500
    } else {
        billAmount = 100 * 5.0 + 400 * 7.0 + (usage - 500) * 10.0;  // ₹10/unit
    }

    // Output the bill amount
    printf("Bill Amount: ₹%.2f\n", billAmount);

    return 0;
}
