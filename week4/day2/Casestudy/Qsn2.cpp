//finding closest pair of points
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of points: ";
    cin>>n;

    double p[n][2];

    // Taking input of points
    for(int i=0;i<n;i++)
    {
        cout<<"Enter x and y for point "<<i+1<<": ";
        cin>>p[i][0]>>p[i][1];
    }

    double minDist = 999999;

    // Compare every pair
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double dx = p[i][0] - p[j][0];
            double dy = p[i][1] - p[j][1];

            double dist = sqrt(dx*dx + dy*dy);

            if(dist < minDist)
                minDist = dist;
        }
    }

    cout<<"Smallest distance = "<<minDist;

    return 0;
}
