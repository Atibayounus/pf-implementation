#include <iostream>
#include <string>  // Required for using string
using namespace std;

int main() {

    string name;
    int age;
    float height;
    char gender;

    // Input name
    cout << "Enter name: ";
    getline(cin, name);  // To allow spaces in name

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height (in meters): ";
    cin >> height;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    // Print student details
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}
