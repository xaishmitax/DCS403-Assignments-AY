//Passing arguments by value
#include <iostream>
using namespace std;

void square(int n) {   // value copy huncha
    cout << "Square = " << n * n << endl;
}

int main() {
    int num = 4;

    square(num);   // function ma value pass

    cout << "Original number = " << num; // change hudaina

    return 0;
}
