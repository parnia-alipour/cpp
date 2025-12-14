#include<iostream>
using namespace std;
int main() {
    int n,i,sum=0,j;
    cout<<"Enter: ";
    cin>>n;
    j=1;
    while(j<=n)
    {
        sum+=j;
        j++;
    }
cout<<sum;
    return 0;
}