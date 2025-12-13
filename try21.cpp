#include <iostream>
using namespace std;
int main() {
    int i,n,fac=1;
    cout<<"Enter Any Number:";
    cin>>n;
    for (i=n;i>1;i--) {
        fac*=i;
    }
    cout<<fac;
    return 0;
}
