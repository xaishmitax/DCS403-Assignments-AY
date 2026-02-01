//Sum of elements using function
#include <iostream>
using namespace std;

// function to calculate sum
int findSum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int result = findSum(a, n);

    cout << "Sum = " << result;

    return 0;
}
