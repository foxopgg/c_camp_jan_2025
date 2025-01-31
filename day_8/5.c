#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Input: ");
    gets(str);
    char *token = strtok(str, " ");
    printf("Output:\n");
    while (token != NULL) {
        printf("[%s]\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
