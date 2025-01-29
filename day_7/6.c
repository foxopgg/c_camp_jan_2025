#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    printf("Enter a string: ");
    scanf("%s", str);

    char firstRepeated = '\0';
    for (int i = 0; i < strlen(str); i++) {
        if (count[(unsigned char)str[i]] == 1) {
            firstRepeated = str[i];
            break;
        }
        count[(unsigned char)str[i]]++;
    }

    if (firstRepeated) {
        printf("First Repeated Character: %c\n", firstRepeated);
    } else {
        printf("No Repeated Character Found\n");
    }

    return 0;
}
