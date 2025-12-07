#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    // Input from user
    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate sum and product

    double sum = num1 + num2;
    double product = num1 * num2;

    // Output results

    cout << "Sum of the two numbers: " << sum << endl;
    cout << "Product of the two numbers: " << product << endl;

    return 0;
}
