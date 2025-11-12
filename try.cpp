#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter your num:";
    cin>>a;

    cout<<"num2:";
    cin>>b;

if (b==0) {
    cout<<"no"<<endl;

}
else if (a%b==0) {
    cout<<"yes"<<endl;

}
else {
    cout<<"no";
}

return 0;
}
