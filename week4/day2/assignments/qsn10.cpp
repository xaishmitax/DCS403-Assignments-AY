//Boundary elements
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int a[n][n];

    cout<<"Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    cout<<"Boundary elements:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // checking boundary condition
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<a[i][j]<<" ";
        }
    }

    return 0;
}
