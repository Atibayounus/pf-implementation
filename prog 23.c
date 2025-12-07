#include <stdio.h>

#define PI 3.14159  

int main() {
    double radius, area, circumference;

    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    
    area = PI * radius * radius;
    circumference = 2 * PI * radius

    
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
