#include <stdio.h>

int main() {
    double vi, t, a, s;  

    // Input values
    printf("Enter initial velocity (vi) in m/s: ");
    scanf("%lf", &vi);

    printf("Enter time (t) in seconds: ");
    scanf("%lf", &t);
    
    printf("Enter acceleration (a) in m/s²: ");
    scanf("%lf", &a);

    // Calculate the distance (s)
    s = vi * t + 0.5 * a * t * t;

    // Output the result
    printf("The distance (s) is: %.2f meters\n", s);

    return 0;
}
