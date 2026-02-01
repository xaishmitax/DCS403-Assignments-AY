//Sudoku Validation
#include <iostream>
using namespace std;

int main()
{
    int grid[9][9];

    cout<<"Enter Sudoku (9x9):\n";
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cin>>grid[i][j];

    bool valid = true;

    // Check rows
    for(int i=0;i<9;i++)
    {
        bool seen[10]={false};

        for(int j=0;j<9;j++)
        {
            int num = grid[i][j];
            if(num<1 || num>9 || seen[num])
                valid=false;
            seen[num]=true;
        }
    }

    // Check columns
    for(int j=0;j<9;j++)
    {
        bool seen[10]={false};

        for(int i=0;i<9;i++)
        {
            int num = grid[i][j];
            if(num<1 || num>9 || seen[num])
                valid=false;
            seen[num]=true;
        }
    }

    // Check 3x3 boxes
    for(int r=0;r<9;r+=3)
    {
        for(int c=0;c<9;c+=3)
        {
            bool seen[10]={false};

            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    int num = grid[r+i][c+j];
                    if(num<1 || num>9 || seen[num])
                        valid=false;
                    seen[num]=true;
                }
            }
        }
    }

    if(valid)
        cout<<"Sudoku is Valid";
    else
        cout<<"Sudoku is Invalid";

    return 0;
}
