//C++ program to assign grades based on marks (A,B,C,D,F). MARKS RANGE : 80-100 A, 60-79 B, 40-59 C, below 40 F

#include <iostream>
using namespace std;
int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60 && marks < 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 40 && marks < 60) {
        cout << "Grade: C" << endl;
    } else if (marks < 40 && marks >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}