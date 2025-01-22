#include <stdio.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    compound_interest = principal * (1 + rate / 100);
    for (int i = 1; i < time; i++) {
        compound_interest *= (1 + rate / 100);
    }
    compound_interest -= principal;

    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}
