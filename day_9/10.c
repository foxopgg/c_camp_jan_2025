#include <stdio.h>
#include <string.h>
int reverse_string(char str[]) {
    str[strcspn(str, "\n")] = '\0';
    return (printf("Output :%s",strrev(str)));
}
int main() {
    char str[100];
    printf("Input : ");
    fgets(str, sizeof(str), stdin);
    reverse_string(str);
    return 0;
}
