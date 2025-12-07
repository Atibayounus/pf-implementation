#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float pf, ic, cg;   // marks for three subjects

    // Input roll number
    cout << "Enter Roll No.: ";
    cin >> rollNo;

    // Input marks for each subject
    cout << "Enter marks in Programming Fundamentals (out of 100): ";
    cin >> pf;

    cout << "Enter marks in Introduction to Computing (out of 100): ";
    cin >> ic;

    cout << "Enter marks in Computer Graphics (out of 100): ";
    cin >> cg;

    // Calculate total and average
    float total = pf + ic + cg;
    float average = total / 3;

    // Output results
    cout << "\n--- Result ---" << endl;
    cout << "Roll No.: " << rollNo << endl;
    cout << "Total Marks: " << total << " / 300" << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
