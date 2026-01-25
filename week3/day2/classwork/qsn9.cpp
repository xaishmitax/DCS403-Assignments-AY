//Constant references parameter
#include <iostream>
using namespace std;

void display(const string &msg) {  // msg change hudaina
    cout << msg;
}

int main() {

    string text = "Hello C++";

    display(text);   // string pass

    return 0;
}
