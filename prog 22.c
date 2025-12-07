#include <stdio.h>

int main() {
    char name[100], gender[10];
    int age;
    float height;

    // Input data for the student
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your gender (Male/Female): ");
    scanf("%s", gender);

    // Display the student's data
    printf("\nStudent Data:\n");
    printf("Name: %s", name);  
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Gender: %s\n", gender);

    return 0;
}
