#include <iostream>
using namespace std;
int main() {
    int a[4]={7,2,5,3},i,j,temp;
    int n=4;
    for (i=0;i<n;i++) {
        cout<<"\na["<<i<<"]="<<a[i];

    }
    for (i=0;i<(n-1);i++) {
        for (j=0;j<=(n-1-i);j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    cout<<"\n***********";
    for(i=0;i<n;i++) {
        cout<<"\na["<<i<<"]="<<a[i];

    }
    return 0;
}