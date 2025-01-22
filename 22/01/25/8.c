#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);

    printf("Palindromic substrings: ");
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (isPalindrome(str, i, j)) {
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf(" ");
            }
        }
    }
    return 0;
}
