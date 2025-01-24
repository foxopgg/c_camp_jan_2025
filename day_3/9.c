#include <stdio.h>

int main() {
    int balance, withdrawal;

    // Input balance and withdrawal amount
    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (withdrawal % 100 != 0) {
        printf("Enter a valid amount.\n");
    } else if (withdrawal > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= withdrawal;
        printf("Remaining Balance: ₹%d\n", balance);
    }

    return 0;
}
