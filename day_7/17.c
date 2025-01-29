#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Digits: ");
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i])) {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
