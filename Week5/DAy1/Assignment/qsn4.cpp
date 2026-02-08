//print array using recursion
#include <iostream>
using namespace std;

void printArray(int arr[], int n, int index) {
    if (index == n)
        return;
    cout << arr[index] << " ";
    printArray(arr, n, index + 1);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements: ";
    printArray(arr, n, 0);
    cout << endl;
    return 0;
}

