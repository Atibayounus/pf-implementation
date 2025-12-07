#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float average;

    // Input marks for five subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);
    
    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);
    
    printf("Enter marks for subject 5: ");
    scanf("%d", &marks5);
 

    // Calculate total and average
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5.0;  // Using 5.0 to ensure floating-point division

    
    // Output the results
    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
