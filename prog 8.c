#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius
    celsius = (5.0 / 9) * (fahrenheit - 32);

    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}
