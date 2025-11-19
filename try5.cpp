#include <iostream>
using namespace std;
void fun(int a, int& b,const int &c) {
    a+=c;
    b+=c;
    cout << a <<","<< b <<","<< c<<endl;//2,3,4

}
int main() {
    int a=2,b=3,c=4;
    cout << a <<","<< b<<"," << c<<endl;
    fun(a,b,c);
    cout << a << ","<<b <<","<< c<<endl;
    return 0;
}