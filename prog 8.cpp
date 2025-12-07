#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;


    celsius = (5.0 / 9.0) * (fahrenheit - 32);


    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
