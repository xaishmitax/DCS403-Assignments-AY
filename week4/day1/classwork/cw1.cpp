//randomly generate 6 unique lotto numbers between 1 and 50
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int lotto[6];
    bool duplicate;
    // Seed random number generator
    srand(time(0));
    // Generate 6 unique numbers
    for (int i = 0; i < 6; i++)
    {
        do
        {
            duplicate = false;
            lotto[i] = rand() % 50 + 1;   // Random number from 1 to 50

            // Check for duplicates
            for (int j = 0; j < i; j++)
            {
                if (lotto[i] == lotto[j])
                {
                    duplicate = true;
                    break;
                }
            }

        } while (duplicate); // Repeat if duplicate found
    }
    // Display lotto numbers
    cout << "Your Lotto Numbers are: ";

    for (int i = 0; i < 6; i++)
    {
        cout << lotto[i] << " ";
    }
    cout << endl;
    return 0;
}
