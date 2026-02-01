//Grading a multiple choice test
#include <iostream>
using namespace std;

int main()
{
    // Answer key
    char key[5] = {'A','C','B','D','A'};

    // Each row = one student
    // Each column = one question
    char ans[3][5] = {
        {'A','C','B','D','A'},
        {'A','B','B','D','A'},
        {'A','C','A','D','B'}
    };

    // Loop for each student
    for(int i=0;i<3;i++)
    {
        int score = 0;

        // Compare with answer key
        for(int j=0;j<5;j++)
        {
            if(ans[i][j] == key[j])
                score++;
        }

        cout<<"Student "<<i+1<<" score = "<<score<<endl;
    }

    return 0;
}
