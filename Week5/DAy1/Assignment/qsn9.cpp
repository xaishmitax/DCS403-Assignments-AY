//Towers of Hanoi
#include <iostream>
using namespace std;

void toh(int n, char from, char aux, char to) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    toh(n - 1, from, to, aux);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    toh(n - 1, aux, from, to);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}

