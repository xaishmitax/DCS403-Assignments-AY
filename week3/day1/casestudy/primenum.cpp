// Display all prime numbers up to a given limit.
#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter the limit: ";
    cin >> limit;

    for (int num = 2; num <= limit; num++) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}