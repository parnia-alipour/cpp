#include <iostream>
using namespace std;
int f(int a,int b) {
    if (b==0) {
        return 0;
    }
    else{
        return a+f(a,b-1);
    }
}
