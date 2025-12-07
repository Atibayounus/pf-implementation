#include <stdio.h>

int main() {
    
    const double PI = 3.14159;
    double radius, height, volume;

    // Input 
    printf("Enter radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume
    volume = PI * radius * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);

    return 0;
}
