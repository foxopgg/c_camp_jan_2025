#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[20];
    printf("Input: ");
    gets(str);
    gets(sub);
    char *pos = strstr(str, sub);
    printf("Output :%ld\n", pos - str);
}
