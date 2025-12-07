#include <iostream>
using namespace std;

int main() {
    int ageYears;
    int ageMonths, ageDays;

    // Assign  age 
    ageYears = 20;

    // Calculate age in months and days
    ageMonths = ageYears * 12;
    ageDays = ageYears * 365;  // not accounting for leap years

    // Output the results
    cout << "Age in years: " << ageYears << endl;
    cout << "Age in months: " << ageMonths << endl;
    cout << "Age in days (approx.): " << ageDays << endl;

    return 0;
}

