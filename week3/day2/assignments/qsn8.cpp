//Print a square of stars with hollow inside.
#include <iostream>
using namespace std;

int main() {
    int n = 5;   // size fixed 5

    for(int i = 1; i <= n; i++) {        // row
        for(int j = 1; j <= n; j++) {    // column

            if(i == 1 || i == n || j == 1 || j == n)
                cout << "*";           // border star
            else
                cout << " ";           // middle space
        }
        cout << endl;
    }

    return 0;
}
