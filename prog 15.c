#include <stdio.h>

int main() {

    int x, y, temp;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
