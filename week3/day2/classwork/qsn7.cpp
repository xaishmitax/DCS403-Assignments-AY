//Global,local and satic variables

#include <iostream>
using namespace std;

int g = 10;   // global variable

void test() {
    int a = 5;              // local variable
    static int s = 0;      // static local

    s++;   // value store huncha

    cout << "Local = " << a << endl;
    cout << "Static = " << s << endl;
}

int main() {

    cout << "Global = " << g << endl;

    test();
    test();   // static value increase huncha

    return 0;
}
