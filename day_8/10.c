#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int lastIndex = -1;
    printf("Input: ");
    gets(str);
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            lastIndex = i;
        }
    }
    printf("Output: %d\n", lastIndex);
}