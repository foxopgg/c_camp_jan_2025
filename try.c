#include <stdio.h>
#include <ctype.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase for uniformity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to check if a character is a consonant
int isConsonant(char ch) {
    ch = tolower(ch);  // Convert to lowercase for uniformity
    return (isalpha(ch) && !isVowel(ch));  // Must be a letter and not a vowel
}

int main() {
    // Test the isPrime function
    int num;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Test the isVowel and isConsonant functions
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isVowel(ch)) {
        printf("'%c' is a vowel.\n", ch);
    } else if (isConsonant(ch)) {
        printf("'%c' is a consonant.\n", ch);
    } else {
        printf("'%c' is neither a vowel nor a consonant.\n", ch);
    }

    return 0;
}
