#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Input: ");
    scanf("%s",&str);
    strlwr(str);
    printf("Output: %s\n", str);
    return 0;
}
