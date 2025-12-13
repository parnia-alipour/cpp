#include<iostream>
using namespace std;
int main() {
    int a,i,sum=0;
    cout<<"Enter Any Number:";
    cin>>a;
    for(i=1;i<=a;i++) {
        sum+=i;
    }
        cout<<sum;

    return 0;
}