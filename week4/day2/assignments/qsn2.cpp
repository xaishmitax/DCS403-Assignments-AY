//sum of all ements in 2x3 array
#include <iostream>
using namespace std;

int main()
{
    int a[2][3];
    int sum = 0;

    cout << "Enter 6 elements:\n";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            sum = sum + a[i][j];   // adding each element
        }
    }

    cout << "Sum = " << sum;

    return 0;
}
