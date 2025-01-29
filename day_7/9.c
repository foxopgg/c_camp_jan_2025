#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int left = 0, right = strlen(str) - 1;
    int isPalindrome = 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
