// using while loop sum of numbers from 1 to n
// using while loop sum of numbers from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
