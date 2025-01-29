#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    int start = 0, end, len = strlen(str);
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start++] = str[end];
                str[end--] = temp;
            }
            start = i + 1;
        }
    }

    printf("Reversed words sentence: %s\n", str);
    return 0;
}
