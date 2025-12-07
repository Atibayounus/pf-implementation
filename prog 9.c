#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    
    max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("Maximum number is: %d\n", max);

    return 0;
}
