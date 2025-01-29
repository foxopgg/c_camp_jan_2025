#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int isNumeric = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            isNumeric = 0;
            break;
        }
    }
    if (isNumeric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
