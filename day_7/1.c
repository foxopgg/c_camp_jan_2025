#include <stdio.h>
int main() {
    char str[100];
    printf("Input : ");
    fgets(str, 100, stdin);
    printf("Output : \n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
