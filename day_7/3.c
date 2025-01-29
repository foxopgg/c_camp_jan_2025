#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int words = 1;
    printf("Input: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && isalnum(str[i + 1])) {
            words++;
        }
    }
    printf("Output :");
    printf("Words: %d\n", words);
    return 0;
}
