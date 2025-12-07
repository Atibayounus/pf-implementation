#include <iostream>
using namespace std;

int main() {
    
    double a, b, c, disc;

    // Input values
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    // Calculate discriminant
    disc = (b * b) - (4 * a * c);

    // Output result
    cout << "Discriminant (disc) = " << disc << endl;

    return 0;
}
