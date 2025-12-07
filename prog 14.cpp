#include <iostream>
using namespace std;

int main() {

    double millimeters, inches;

    // Input millimeters
    cout << "Enter length in millimeters: ";
    cin >> millimeters;

    // Conversion: 1 inch = 25.4 mm
    inches = millimeters / 25.4;

    // Output result
    cout << millimeters << " millimeters is equal to " << inches << " inches." << endl;

    return 0;
}
