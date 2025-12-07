#include <stdio.h>

int main() {

    int x = 5, y = 10;
    int temp;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swapping values
    
    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
