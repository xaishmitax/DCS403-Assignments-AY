//Defining and Calling a Function
#include <iostream>
using namespace std;

// function banako
int add(int a, int b) {
    return a + b;   // dui number jodera return
}

int main() {
    int x = 5, y = 3;

    cout << "Sum = " << add(x, y);  // function call

    return 0;
}
