//Row-wise and column wise Sums
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    cout << "Enter matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    // Row sums
    for(int i=0;i<3;i++)
    {
        int rsum = 0;
        for(int j=0;j<3;j++)
            rsum += a[i][j];

        cout << "Row " << i+1 << " sum = " << rsum << endl;
    }

    // Column sums
    for(int j=0;j<3;j++)
    {
        int csum = 0;
        for(int i=0;i<3;i++)
            csum += a[i][j];

        cout << "Column " << j+1 << " sum = " << csum << endl;
    }

    return 0;
}
