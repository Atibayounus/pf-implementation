#include <stdio.h>

int main() {

    int ageYears;
    int ageMonths, ageDays;

    // Assign your age
    printf("Enter your age in years: ");
    scanf("%d", &ageYears);

    
    // Calculate age in months and days
    ageMonths = ageYears * 12;
    ageDays = ageYears * 365;  
 

    printf("Your age in months: %d\n", ageMonths);
    printf("Your age in days: %d\n", ageDays);

    return 0;
}
