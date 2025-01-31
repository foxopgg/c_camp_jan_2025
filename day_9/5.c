#include <stdio.h>
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
int main() {
    float celsius;
    printf("Celsius:");
    scanf("%f",&celsius);
    printf("Fahrenheit %.2f\n", celsius_to_fahrenheit(celsius));
    return 0;
}
