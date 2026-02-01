//find maximum elemnt in array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // Assume first element is maximum
    int max = a[0];

    // Comparing with remaining elements
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    cout << "Maximum element = " << max;

    return 0;
}
