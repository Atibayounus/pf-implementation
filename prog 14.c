#include <stdio.h>

int main() {

    double millimeters, inches;

    printf("Enter length in millimeters: ");
    scanf("%lf", &millimeters);

    inches = millimeters / 25.4;  

    printf("%.2f millimeters is equal to %.2f inches\n", millimeters, inches);

    return 0;
}
