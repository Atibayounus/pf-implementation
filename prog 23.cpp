#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, area, circumference;

    // Input radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
