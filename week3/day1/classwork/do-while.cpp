#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    do {
        sum = sum + i;
        i++;
    } while (i <= n);

    cout << "Sum = " << sum << endl;
    return 0;
}