#include <stdio.h>

int main() {
    int hour;

    // Input hour
    printf("Enter hour (0–23): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour <= 11) {
        printf("Good Morning\n");
    } else if (hour >= 12 && hour <= 16) {
        printf("Good Afternoon\n");
    } else if (hour >= 17 && hour <= 20) {
        printf("Good Evening\n");
    } else {
        printf("Good Night\n");
    }

    return 0;
}
