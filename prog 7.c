#include <stdio.h>

int main() {
    int rollNo;
    float pf, ic, cg; // Marks in three subjects
    float total, average;

    // Input student details
    printf("Enter Roll No.: ");
    scanf("%d", &rollNo);
    printf("Enter marks in Programming Fundamentals: ");
    scanf("%f", &pf);
    printf("Enter marks in Introduction to Computing: ");
    scanf("%f", &ic);
    printf("Enter marks in Computer Graphics: ");
    scanf("%f", &cg);

    // Calculate total and average
    total = pf + ic + cg;
    average = total / 3;

    // Display result
    printf("\nRoll No.: %d\n", rollNo);
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
