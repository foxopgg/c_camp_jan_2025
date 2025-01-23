#include <stdio.h>

int main() {
    int distance, trafficHigh = 0, fare = 0;
    char traffic[10];
    printf("Enter the distance (in km): ");
    scanf("%d", &distance);
    printf("Enter traffic condition (Low/High): ");
    scanf("%s", traffic);

    if (traffic[0] == 'H' || traffic[0] == 'h') {
        trafficHigh = 1;
    }

    if (distance <= 5) {
        fare = distance * 10;
    } else if (distance <= 15) {
        fare = 5 * 10 + (distance - 5) * 8;
    } else {
        fare = 5 * 10 + 10 * 8 + (distance - 15) * 5;
    }

    if (trafficHigh) {
        fare = fare * 1.5; // Increase by 50%
    }

    printf("Fare = $%d\n", fare);

    return 0;
}
