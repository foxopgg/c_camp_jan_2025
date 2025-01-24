#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &input);

    if (isupper(input)) {
        printf("Uppercase\n");
    } else if (islower(input)) {
        printf("Lowercase\n");
    } else if (isdigit(input)) {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
