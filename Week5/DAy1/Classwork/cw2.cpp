// using recursion to calculate the sum of series upto given n term.
#include <iostream>
using namespace std;    
 int recursion(int n);
 int main()
 {
    int num;
    cout <<("Enter a positive integer: ");
    cin >> num;
    printf("Sum of series upto %d terms is: %d\n", num, recursion(num));
    return 0;
 }
 int recursion (int num){
    if (num == 1 || num == 0)
        return 1;
    else
        return num + recursion(num - 1);
 }
