#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    printf("Input: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Output: %s\n", str);
    return 0;
}
