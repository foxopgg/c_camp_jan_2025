#include <stdio.h>
int is_prime(int num) {
    printf("Output :");
    if (num <= 1) return (printf("False"));
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return (printf("Fales"));
    }
    return (printf("True"));
}
int main() {
    int num;
    printf("Input :");
    scanf("%d",&num);
    is_prime(num);
}
