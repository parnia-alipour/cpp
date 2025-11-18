#include <iostream>
using namespace std;

void fun(int& a, int& b);

int main() {
    int a, b;
    cout << "\nenter a: ";
    cin >> a;
    cout << "\nenter b: ";
    cin >> b;

    cout << "a = " << a << " b = " << b << endl;

    fun(a, b);

    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

void fun(int& a, int& b) {
    int t;
    t = a; //3
    a = b; //2
    b = t;//3

    cout << "a = " << a << " b = " << b << endl;
}