//Inline fucntion
#include <iostream>
using namespace std;

inline int cube(int n) {   // sano function inline
    return n * n * n;
}

int main() {

    cout << "Cube = " << cube(3);

    return 0;
}
