#include <stdio.h>

int main() {
    int age;
    float originalPrice, finalPrice;

    // Input age and original price
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Original Price: ");
    scanf("%f", &originalPrice);

    if (age < 18) {
        finalPrice = originalPrice * 0.90;  // 10% discount
    } else if (age <= 60) {
        finalPrice = originalPrice * 0.95;  // 5% discount
    } else {
        finalPrice = originalPrice * 0.85;  // 15% discount
    }

    // Output final price
    printf("Final Price: ₹%.2f\n", finalPrice);

    return 0;
}
