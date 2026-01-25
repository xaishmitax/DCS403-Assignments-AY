//Print triangle of increasing numbers
// 1
// 12
// 123
// 1234
// 12345
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {        // row
        for(int j = 1; j <= i; j++) {   // number print
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
