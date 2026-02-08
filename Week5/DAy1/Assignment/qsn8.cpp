//Reverswe a string using recursion
#include <iostream>
using namespace std;

void reverseStr(string &s, int start, int end) {
    if (start >= end)
        return;
    swap(s[start], s[end]);
    reverseStr(s, start + 1, end - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    reverseStr(s, 0, s.length() - 1);
    cout << "Reversed string: " << s << endl;
    return 0;
}

