#include <stdio.h>
unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    printf("Input :");
    scanf("%d",&num);
    printf("Output:%llu\n", factorial(num));
    return 0;
}
