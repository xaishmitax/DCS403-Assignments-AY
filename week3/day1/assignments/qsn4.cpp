//Count Digits of a Number (Using `do-while` loop)
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;   // count = digit counter

    cout << "Enter a number: ";
    cin >> num;

    do {
        num = num / 10;  // digit hataucha
        count++;         
    } while (num != 0);  // sabai digit sakina samma

    cout << "Total digits = " << count;

    return 0;
}
