#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("Unique Characters: ");
    for (int i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");

    return 0;
}
