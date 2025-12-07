#include <stdio.h>

int main() {
    
    int age_years;
    int age_months;

    printf("Enter your age in years: ");
    scanf("%d", &age_years);

    age_months = age_years * 12;

    printf("Your age in months is: %d months\n", age_months);
    return 0;
}
