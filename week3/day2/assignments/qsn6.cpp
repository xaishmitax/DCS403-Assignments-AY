//Print inverted centered triangle
#include <iostream>
using namespace std;

int main() {
    int n=5;

    for(int i = n; i >= 1; i--) {

        for(int s = 0; s < n - i; s++) {  // space
            cout << " ";
        }

        for(int j = 1; j <= 2*i - 1; j++) { // star
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
