//Print a Multiplication Table (1–10) (Using Nested Loops)
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {   // table number
        cout << "Table of " << i << endl;

        for (int j = 1; j <= 10; j++) { // multiply 1 to 10
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;   // gap between tables
    }

    return 0;
}
