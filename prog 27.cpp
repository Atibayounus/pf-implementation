#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    int totalSeconds;

    // Input hours, minutes, and seconds
    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> seconds;

    // Convert total time into seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Output result
    cout << "Total time in seconds: " << totalSeconds << " seconds" << endl;

    return 0;
}
