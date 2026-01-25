//passing arguments by reference
#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {   // reference use
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    swapValues(x, y);   // direct change huncha

    cout << "x = " << x << " y = " << y;

    return 0;
}
