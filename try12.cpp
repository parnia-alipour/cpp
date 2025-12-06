#include<iostream>
using namespace std;
int main() {
    int a[5],i,sum=0;
    for(i=0;i<5;i++) {
        cout<<"\nenter a["<<i<<"]:<<:";
        cin>>a[i];
    }
    for(i=0;i<5;i++) {
        if(a[i]%2!=0) {
            sum+=a[i];
        }
    }
    for ( i=0;i<5;i++) {
        cout<<"\na["<<i<<"]="<<a[i];
        }
        cout<<"\nsum="<<sum;
        return 0;
    }
