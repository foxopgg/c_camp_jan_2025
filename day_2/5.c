#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}