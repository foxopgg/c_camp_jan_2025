#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf(" Input:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int start = 0, end = strlen(str) - 1;
    while (str[start] == ' ') start++;
    while (end >= start && str[end] == ' ') end--;
    printf("Output:");
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
