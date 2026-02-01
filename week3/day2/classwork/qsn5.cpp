//Default Arguments
#include <iostream>
using namespace std;

int power(int base, int exponent = 2) {  // exponent default 2
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result = result * base;   // multiply gardai
    }

    return result;
}

int main() {

    cout << power(3) << endl;     // square
    cout << power(2, 3);         // cube

    return 0;
}
