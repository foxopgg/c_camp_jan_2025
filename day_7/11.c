#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start, end;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);

    int j = 0;
    for (int i = start; i <= end && str[i] != '\0'; i++) {
        substr[j++] = str[i];
    }
    substr[j] = '\0';

    printf("Substring: %s\n", substr);
    return 0;
}
