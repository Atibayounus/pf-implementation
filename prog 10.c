#include <stdio.h>

int main() {
    
    double miles = 2.5;
    double kilometers;

    kilometers = miles * 1.609; 

    printf("%.2f miles is equal to %.2f kilometers\n", miles, kilometers);

    return 0;
}
