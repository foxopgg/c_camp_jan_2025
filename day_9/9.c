#include <stdio.h>
int range_sum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int start, end;
    printf("Input :");
    scanf("%d , %d",&start, &end);
    printf("Output: %d\n", range_sum(start, end));
    return 0;
}
