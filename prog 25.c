#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    double a, b, c, s, area;


    printf("Enter the first side of the triangle: ");
    scanf("%lf", &a);

    printf("Enter the second side of the triangle: ");
    scanf("%lf", &b);

    printf("Enter the third side of the triangle: ");
    scanf("%lf", &c);

    
    s = (a + b + c) / 2;


    area = sqrt(s * (s - a) * (s - b) * (s - c));

    
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
