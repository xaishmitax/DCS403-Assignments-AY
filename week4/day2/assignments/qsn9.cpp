//symmetric matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    bool symmetric = true;

    cout<<"Enter matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout<<"Matrix is Symmetric";
    else
        cout<<"Matrix is Not Symmetric";

    return 0;
}
