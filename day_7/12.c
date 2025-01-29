#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 1; str[i]; i += 2) {
        str[i] = '*';
    }

    printf("Modified string: %s\n", str);
    return 0;
}
