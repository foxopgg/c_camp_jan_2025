#include <stdio.h>

int main() {
    float a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } else if (a != b && b != c && a != c) {
        float largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("Largest number is %.2f.\n", largest);
    } else {
        float largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("Two numbers are equal, largest is %.2f.\n", largest);
    }

    return 0;
}
