#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Occurrences of '%c': %d\n", ch, count);
    return 0;
}
