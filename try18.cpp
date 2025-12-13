#include<iostream>
using namespace std;
int main() {
    int x,n,j=0,c=0,sum=0;
    cout<<"enter:";
    cin>>n;
    while(j<n) {
        cout<<" x:";
        cin>>x;
        if (x>=0) {
            sum+=x;
            c++;


        }
        if (c>0) {


            cout<<"Average="<<float(sum)/c;
        }
        else {
            cout<<"No non-negative numbers entered!";
    }
        }

    return 0;

}