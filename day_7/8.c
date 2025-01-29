#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int upper = 0, lower = 0;
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        }
    }
    printf("Uppercase: %d, Lowercase: %d\n", upper, lower);
    return 0;
}
