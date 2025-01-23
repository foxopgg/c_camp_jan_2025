#include <stdio.h>
#include <string.h>

int main() {
    int marks, bonus = 0;
    char extra[10];
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("Did the student participate in extracurricular activities? (Yes/No): ");
    scanf("%s", extra);

    if (strcmp(extra, "Yes") == 0 || strcmp(extra, "yes") == 0) {
        bonus = 5;
    }

    marks += bonus;

    if (marks >= 90) {
        printf("Grade = A\n");
    } else if (marks >= 75) {
        printf("Grade = B\n");
    } else if (marks >= 50) {
        printf("Grade = C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
