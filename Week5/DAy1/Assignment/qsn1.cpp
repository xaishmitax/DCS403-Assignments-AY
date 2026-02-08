// C++ program to print numbers from 1 to N using recursion
#include <iostream>
using namespace std;

void printNums(int n) {
    if (n == 0)
        return;
    printNums(n - 1);
    cout << n << " "; // prints numbers during recursion unwind
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    printNums(n);
    cout << endl; // flush output
    return 0;
}
