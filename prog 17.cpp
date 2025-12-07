#include <iostream>
using namespace std;

int main() {

    double number = 15.58971;
    int integralPart;
    double fractionalPart;

    // Separate integral part
    integralPart = static_cast<int>(number);


    // Separate fractional part
    fractionalPart = number - integralPart;

    
    // Output the results
    cout << "Number: " << number << endl;
    cout << "Integral part: " << integralPart << endl;
    cout << "Fractional part: " << fractionalPart << endl;

    return 0;
}
