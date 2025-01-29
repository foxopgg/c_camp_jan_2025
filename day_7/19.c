#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    int capitalize = 1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            capitalize = 1;
        } else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Capitalized sentence: %s\n", str);
    return 0;
}
