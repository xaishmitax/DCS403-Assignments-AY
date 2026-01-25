// Inverted Right-Angled Triangle
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter rows: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {        // row ghataudai
        for(int j = 1; j <= i; j++) {   // star count
            cout << "*";
        }
        cout << endl;                  // new line
    }

    return 0;
}
