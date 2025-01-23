#include <stdio.h>

int main() {
    int marks[5], total = 0, max_total;
    float percentage;

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("Enter maximum total marks: ");
    scanf("%d", &max_total);

    percentage = (float)total / max_total * 100;

    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}

