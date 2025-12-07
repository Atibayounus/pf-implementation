#include <stdio.h>

int main() {

    int hours, minutes, seconds;
    int totalSeconds;

    // Input time 
    printf("Enter time in hours: ");
    scanf("%d", &hours);

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Convert time into seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total time in seconds: %d\n", totalSeconds);

    return 0;
}
