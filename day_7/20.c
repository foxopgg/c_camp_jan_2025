#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100][100];
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    int len = strlen(str), wordCount = 0, j = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            rev[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            rev[wordCount][j++] = str[i];
        }
    }

    printf("Reversed sentence: ");
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", rev[i]);
    }
    printf("\n");

    return 0;
}
