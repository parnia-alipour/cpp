#include<iostream>
using namespace std;
int main (){
    int i,j,k,s,n;

    cout<<"enter n:";
    cin>>n;

    for(i=1;i<=n;i++) {
    for (j=1;j<=(n-i);j++)
            cout<<" ";
    for (k=1;k<=i;k++)
        cout<<" * ";
    for (s=1;s<=(n-i);s++)
                cout<<" ";
            cout<<endl;
    }
            return 0;
}