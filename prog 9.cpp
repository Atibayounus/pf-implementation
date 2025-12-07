#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, maxNum;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    // Using && operator to check which number is maximum
    if (a >= b && a >= c && a >= d)
        maxNum = a;
    else if (b >= a && b >= c && b >= d)
        maxNum = b;
    else if (c >= a && c >= b && c >= d)
        maxNum = c;
    else
        maxNum = d;

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

