// Detecting a sentinel values , asking for inputs then when the sentinel value is written, stopped
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (0 to stop): ";
    cin >> num;

    while (num != 0) {   
        cout << "You entered: " << num << endl;
        cin >> num;
    }

    cout << "Loop stopped due to sentinel value.";
    return 0;
}