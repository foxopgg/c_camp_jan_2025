#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    char vowels[100], consonants[100];
    int v_index = 0, c_index = 0;
    printf("Input: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels[v_index++] = str[i];
        } else if (isalpha(ch)) {
            consonants[c_index++] = str[i];
        }
    }
    vowels[v_index] = '\0';
    consonants[c_index] = '\0';
    printf("Vowels: %s\t |", vowels);
    printf("Consonants: %s\n", consonants);

    return 0;
}
