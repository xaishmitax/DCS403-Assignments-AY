//Reverse Digits of a Number (Using `while` loop)
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;   // rev = reverse number

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {          // number 0 nahuda samma
        int digit = num % 10;  // last digit nikaldai
        rev = rev * 10 + digit; // reverse banaudai
        num = num / 10;        // last digit hataucha
    }

    cout << "Reversed number = " << rev;

    return 0;
}
