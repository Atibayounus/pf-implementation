#include <stdio.h>

#define PI 3.14159  

int main() {
    
    double radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Print result
    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
