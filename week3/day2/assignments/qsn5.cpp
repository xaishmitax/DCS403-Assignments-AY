//Print centered pyramid of stars
#include <iostream>
using namespace std;

int main() {
    int n=5; // number of rows


    for(int i = 1; i <= n; i++) {

        for(int s = 1; s <= n - i; s++) { // space print
            cout << " ";
        }

        for(int j = 1; j <= 2*i - 1; j++) { // star print
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
