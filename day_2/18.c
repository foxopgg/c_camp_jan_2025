#include <stdio.h>

int main() {
    int usage, duration;
    float cost = 0, discount = 0;

    printf("Enter usage (in GB): ");
    scanf("%d", &usage);
    printf("Enter subscription duration (in years): ");
    scanf("%d", &duration);

    if (usage <= 100) {
        cost = usage * 1;
    } else {
        cost = 100 * 1 + (usage - 100) * 2;
    }

    if (duration > 1) {
        discount = cost * 0.15; // 15% discount
    }

    cost -= discount;

    printf("Cost = $%.2f\n", cost);

    return 0;
}
