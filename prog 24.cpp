#include <iostream>
using namespace std;

int main() {
    
    float marks1, marks2, marks3, marks4, marks5;
    float total, average;

    // Input marks for five subjects
    cout << "Enter marks for Subject 1 (out of 100): ";
    cin >> marks1;

    cout << "Enter marks for Subject 2 (out of 100): ";
    cin >> marks2;

    cout << "Enter marks for Subject 3 (out of 100): ";
    cin >> marks3;

    cout << "Enter marks for Subject 4 (out of 100): ";
    cin >> marks4;

    cout << "Enter marks for Subject 5 (out of 100): ";
    cin >> marks5;

    // Calculate total and average
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5;

    // Output results
    cout << "\nTotal Marks: " << total << " / 500" << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
