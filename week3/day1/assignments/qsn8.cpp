//Floyd’s Triangle Pattern (Nested `for` loops)
#include <iostream>
using namespace std;

int main() {
    int n, num = 1;   // num = print hune number

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {     // row
        for (int j = 1; j <= i; j++) { // column
            cout << num << " ";       // number print
            num++;                    // next number
        }
        cout << endl;                 // new line
    }

    return 0;
}
