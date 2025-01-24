#include <stdio.h>

int main() {
    long salary, loanAmount;
    int creditScore;

    // Input salary, credit score, and loan amount
    printf("Enter Salary: ");
    scanf("%ld", &salary);
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);
    printf("Enter Loan Amount: ");
    scanf("%ld", &loanAmount);

    // Check eligibility
    if (salary > 500000 && creditScore >= 750) {
        printf("Eligible. Adjusted Loan Amount: -₹%ld\n", loanAmount);
    } else {
        printf("Not eligible for the loan.\n");
    }

    return 0;
}
