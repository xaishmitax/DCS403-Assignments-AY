// checking if the number is a palindrome or not
#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> number;

    original = number;   // store original number

    while (number != 0) {
        remainder = number % 10;              // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        number = number / 10;                 // remove last digit
    }

    if (original == reversed)
        cout << "The number is a palindrome";
    else
        cout << "The number is not a palindrome";

    return 0;
}