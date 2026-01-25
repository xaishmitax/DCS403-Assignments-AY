// ### 1. Solid Square of Stars
// ****
// ****
// ****
// ****
#include <iostream>
using namespace std;

int main() {
    int n=4;

    for(int i = 1; i <= n; i++) {       // row loop
        for(int j = 1; j <= n; j++) {   // column loop
            cout << "*";               // star print
        }
        cout << endl;                  // next line
    }

    return 0;
}
