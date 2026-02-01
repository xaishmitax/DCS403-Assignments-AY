//Largest elemnentr in each row
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    cout<<"Enter matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];

    for(int i=0;i<3;i++)
    {
        int max = a[i][0];   // assume first element is largest

        for(int j=1;j<3;j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }

        cout<<"Max of row "<<i+1<<" = "<<max<<endl;
    }

    return 0;
}
