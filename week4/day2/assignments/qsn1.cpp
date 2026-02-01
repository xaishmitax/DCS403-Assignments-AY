//Input and display 3x3 matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    // Taking input
    cout << "Enter 9 elements:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Displaying matrix
    cout << "\nMatrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
