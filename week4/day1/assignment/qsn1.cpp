//store and idplay 5 integer
#include <iostream>
using namespace std;

int main()
{
    int a[5];

    // Taking input from user
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // Displaying elements
    cout << "Array elements are:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
