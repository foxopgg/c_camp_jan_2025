#include <stdio.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Compute the sum of each digit raised to the power of the number of digits
    while (temp > 0) {
        int rem = temp % 10;
        int power = 1;

        // Calculate `rem^digits` manually
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
