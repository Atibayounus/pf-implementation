#include <iostream>
#include <cmath>  // Required for sqrt()
using namespace std;

int main() {
    double a, b, c, s, area;

    // Input sides of the triangle
    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    // Calculate s
    s = (a + b + c) / 2;

    // Calculate area
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output result
    cout << "Area of the triangle is: " << area << endl;

    return 0;
}
