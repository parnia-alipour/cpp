#include <iostream>
using namespace std;

inline int fun(int a) {
    return a*a*a;
}
int main() {
    int x=3,y;
    cout<<fun(4)<<endl;
    y=fun(2*x-3);
    cout<<y<<endl;
    return 0;
}