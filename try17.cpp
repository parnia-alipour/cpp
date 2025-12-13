#include<iostream>
using namespace std;
int main() {
    int n=2;
    int &rn=n;
    cout<<n<<" ,"<<rn<<endl;
    cout<<&n<<" ,"<<&rn<<endl;
    return 0;
}