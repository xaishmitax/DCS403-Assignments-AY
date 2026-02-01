//Print Multiplication Table (Using `do-while` loop)
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;   // num = number, i = counter

    cout << "Enter a number: ";
    cin >> num;       // number input

    do {
        cout << num << " x " << i << " = " << num * i << endl; // table print
        i++;          // counter badhauchha
    } while (i <= 10); // 10 samma chalcha

    return 0;
}
