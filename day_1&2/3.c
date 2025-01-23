#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    printf("GCD = %d, LCM = %d\n", gcd, lcm);
    return 0;
}
