//Print patterns in increasing order
#include <iostream>
using namespace std;

int main() {
    int n=5;


    for(int i = 1; i <= n; i++) {           // row loop
        for(int j = 0; j < i; j++) {       // column loop
            cout << char('A' + j) << " "; // A,B,C print
        }
        cout << endl;
    }

    return 0;
}
