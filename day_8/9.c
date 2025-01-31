#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, j = 0;
    printf("Input: ");
    gets(str);
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Output: %s\n", str);
    return 0;
}
