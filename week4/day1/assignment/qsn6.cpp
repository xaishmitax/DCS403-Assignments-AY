//selection sort
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    // Selection sort
    for(int i=0;i<n-1;i++)
    {
        int minIndex = i;

        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[minIndex])
                minIndex = j;
        }

        // Swapping
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
