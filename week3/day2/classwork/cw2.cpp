#include<iostream>
using namespace std;
int globalCount = 0;
void showCounter(){
    int localCount = 0;
    static int count = 0;
    localCount++;
    count++;
    globalCount++;
    cout << "Local count: " << localCount << "static Count: " << count << " Global count: " << globalCount << endl;
}
int main(){
    showCounter();
    showCounter();
}