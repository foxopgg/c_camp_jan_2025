#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "a1b2c3";
    printf("Input : %s",str);
    char result[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("Output: %s\n", result);
    return 0;
}
