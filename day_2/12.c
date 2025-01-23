#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 6 == 0) {
        printf("Divisible by both 4 and 6\n");
    } else {
        printf("Not divisible by both 4 and 6\n");
    }

    return 0;
}
