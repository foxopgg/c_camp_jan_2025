#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    char ch1, ch2;
    int ascii1, ascii2;
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    ascii1 = (int)ch1;
    ascii2 = (int)ch2;
    if (isVowel(ch1) && isVowel(ch2)) {
        printf("%d\n", ascii1 + ascii2);
    } else if ((isVowel(ch1) && !isVowel(ch2) && isalpha(ch2)) ||
               (!isVowel(ch1) && isalpha(ch1) && isVowel(ch2))) {
        printf("%d\n", abs(ascii1 - ascii2));
    } else if (!isVowel(ch1) && isalpha(ch1) && !isVowel(ch2) && isalpha(ch2)) {
        printf("%d\n", ascii1 * ascii2);
    } else {
    }
    return 0;
}
