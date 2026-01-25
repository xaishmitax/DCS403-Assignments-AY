//Print a Half Pyramid Pattern (Using Nested `for` loops)
//Input number of rows and print this pattern:
//*
//**
//***
//****
//*****

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {   // row loop
        for (int j = 1; j <= i; j++) {  // column loop
            cout << "*";               // star print
        }
        cout << endl;                  // new line
    }

    return 0;
}
