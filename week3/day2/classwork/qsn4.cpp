//Function overloading
#include <iostream>
using namespace std;

// circle ko area
float area(float r) {
    return 3.14 * r * r;
}

// rectangle ko area
int area(int l, int b) {
    return l * b;
}

int main() {

    cout << "Circle Area = " << area(5.0) << endl;
    cout << "Rectangle Area = " << area(4, 6);

    return 0;
}
