#include <stdio.h>

int main() {

    int num1, num2;
    int sum, product;

    // Get numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
