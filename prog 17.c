#include <stdio.h>
#include <math.h>  

int main() {
    double num = 15.58971;
    int integralPart;
    double fractionalPart;

    // Separate integral part
    integralPart = (int)num;

    // Separate fractional part
    fractionalPart = num - integralPart;

    printf("Number: %.5f\n", num);
    printf("Integral part: %d\n", integralPart);
    printf("Fractional part: %.5f\n", fractionalPart);

    return 0;
}
