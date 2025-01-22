#include <stdio.h>

int main() {
    int n, array[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int largest = -2147483648, secondLargest = -2147483648;
    for (int i = 0; i < n; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }
    printf("Second largest number = %d\n", secondLargest);
    return 0;
}
