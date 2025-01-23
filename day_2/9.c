#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
