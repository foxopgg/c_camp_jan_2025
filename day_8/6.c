#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Input: ");
    gets(str1);
    gets(str2);
    printf("Output: ");
    if (strstr(str1, str2) != NULL)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
