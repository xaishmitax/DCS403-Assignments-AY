//Sum of first n natural numbers using for loop
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;   // N = input, sum = total

    cout << "Enter N: ";
    cin >> N;       

    for (int i = 1; i <= N; i++) {   // 1 dekhi N samma loop
        sum = sum + i;              // sabai number jodcha
    }

    cout << "Sum = " << sum;        // final sum print

    return 0;
}
