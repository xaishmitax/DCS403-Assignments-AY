//matrix multiplication (2x3x3x2)
#include <iostream>
using namespace std;

int main()
{
    int A[2][3], B[3][2], C[2][2];

    cout<<"Enter Matrix A:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>A[i][j];

    cout<<"Enter Matrix B:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<2;j++)
            cin>>B[i][j];

    // Initialize result matrix with 0
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            C[i][j]=0;

    // Multiplication
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<3;k++)
                C[i][j] += A[i][k] * B[k][j];

    cout<<"Result:\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<C[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}

