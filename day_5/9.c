#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target number: ");
    scanf("%d", &target);

    int closest = arr[0];
    for(int i = 1; i < n; i++) {
        if(abs(arr[i] - target) < abs(closest - target)) {
            closest = arr[i];
        }
    }

    printf("Closest match to target: %d\n", closest);
    return 0;
}