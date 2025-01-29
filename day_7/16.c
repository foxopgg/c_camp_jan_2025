#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], longest[100];
    int maxLen = 0, len = 0;
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    int j = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        } else {
            word[j++] = str[i];
        }
    }

    printf("Longest Word: %s\n", longest);
    return 0;
}
