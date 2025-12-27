#include <iostream>
using namespace std;
int main() {
    int n,i,sum=0;
    cout<<"Enter Any Number:";
    cin>>n;
    i=1;
    do {
        sum+=i;
        i++;

    }
    while (i<=n);
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

}