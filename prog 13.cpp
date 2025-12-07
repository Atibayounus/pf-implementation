#include <iostream>
using namespace std;

#define PI 3.14159  // define constant for pi

int main() {
    
    double radius, area;

    // Input radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = PI * radius * radius;

    // Output the result
    cout << "Area of the circle is: " << area << endl;

    return 0;
}
