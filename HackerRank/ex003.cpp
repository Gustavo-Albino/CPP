#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int numInt;
    long numLong;
    char myChar;
    float numFloat;
    double numDouble;
    
    cout.precision(3);
    cout << fixed;
    cin >> numInt >> numLong >> myChar >> numFloat >> numDouble;
    cout << numInt << endl << numLong << endl << myChar << endl << numFloat << endl << numDouble;
    return 0;
}
