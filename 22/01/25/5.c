#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase letters to lowercase (ASCII range)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A'); // Equivalent to adding 32
        }

        // Check if the character is a letter
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
