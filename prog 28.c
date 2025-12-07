#include <stdio.h>

int main() {
    float a, b, c, disc;

    // Input values for a, b, and c
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    printf("Enter value of c: ");
    scanf("%f", &c);

    // Calculate the discriminant
    disc = (b * b) - (4 * a * c);

    printf("The discriminant (disc) is: %.2f\n", disc);

    return 0;
}
