//Print Pascal’s triangle up to N rows.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        for(int s = 1; s <= n - i; s++) // space
            cout << " ";

        int val = 1;   // first value always 1

        for(int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1); // next value formula
        }

        cout << endl;
    }

    return 0;
}
