#include <iostream>
using namespace std;
int f(int n ) {
    cout << "enter:";
    cin >> n;
    if (n==0)return 1;
        return n*f(n-1);
    }