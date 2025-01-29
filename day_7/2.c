#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Input: ");
    fgets(str, 100, stdin);
    int a = strlen(str);
    printf("Output : ");
    printf("Length: %d\n", a);
    return 0;
}
