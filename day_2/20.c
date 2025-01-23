#include <stdio.h>

int main() {
    int duration, age;
    float fee = 0;

    printf("Enter membership duration (in months): ");
    scanf("%d", &duration);
    printf("Enter age: ");
    scanf("%d", &age);

    if (duration == 1) {
        fee = 50;
    } else if (duration == 3) {
        fee = 140;
    } else if (duration == 6) {
        fee = 250;
    }

    if (age < 18 || age >= 60) {
        fee *= 0.8; // Apply 20% discount
    }

    printf("Fee = $%.2f\n", fee);

    return 0;
}
