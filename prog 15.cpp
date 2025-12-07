#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input values
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    // Display values before swapping
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
