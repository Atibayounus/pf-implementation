#include <iostream>
using namespace std;

int main() {
    double vi, t, a, s;

    
    cout << "Enter initial velocity (vi): ";
    cin >> vi;

    cout << "Enter time (t): ";
    cin >> t;

    cout << "Enter acceleration (a): ";
    cin >> a;

    // Calculate s
    s = vi * t + 0.5 * a * t * t;

    // Output 
    cout << "Displacement (s) is: " << s << endl;

    return 0;
}
