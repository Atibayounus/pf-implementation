#include <iostream>
using namespace std;

int main() {
    
    const double PI = 3.14159;  // constant for pi
    double radius, height, volume;

    // Input radius and height
    cout << "Enter radius of the cylinder: ";
    cin >> radius;

    cout << "Enter height of the cylinder: ";
    cin >> height;

    // Calculate volume
    volume = PI * radius * radius * height;

    // Output the result
    cout << "Volume of the cylinder is: " << volume << endl;

    return 0;
}
