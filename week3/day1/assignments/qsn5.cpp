//Factorial of a Number (Using `for` loop)
#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;   // factorial start 1 bata

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {  // 1 dekhi n samma
        fact = fact * i;           // multiply gardai
    }

    cout << "Factorial = " << fact;

    return 0;
}
