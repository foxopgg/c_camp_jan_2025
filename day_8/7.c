#include <stdio.h>
#include <string.h>
int main() {
    char str[100], oldWord[20], newWord[20];
    printf("Input: ");
    gets(str);
    printf("replace: ");
    gets(oldWord);
    printf("With: ");
    gets(newWord);
    char *pos = strstr(str, oldWord);
    if (pos != NULL) {
        strncpy(pos, newWord, strlen(newWord));
        pos[strlen(newWord)] = '\0';
    }
    printf("Output: %s\n", str);
    return 0;
}
