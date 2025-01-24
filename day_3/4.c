#include <stdio.h>

int main() {
    int score, adjustedScore;

    // Input score
    printf("Enter Score: ");
    scanf("%d", &score);

    if (score > 0 && score % 2 == 0) {
        adjustedScore = score * 2;  // Double if positive and even
    } else if (score > 0) {
        adjustedScore = score * 3;  // Triple if positive and odd
    } else if (score < 0) {
        adjustedScore = (-score) * (-score);  // Flip and square if negative
    } else {
        adjustedScore = 0;  // For a score of 0
    }

    // Output adjusted score
    printf("Adjusted Score: %d\n", adjustedScore);

    return 0;
}
