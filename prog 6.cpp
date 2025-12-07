#include <iostream>
using namespace std;

int main() {
    int ageYears;

    // Input age in years
    cout << "Enter your age in years: ";
    cin >> ageYears;

    // Calculate age in months
    int ageMonths = ageYears * 12;

    // Output result
    cout << "Your age in months is: " << ageMonths << endl;

    return 0;
}
