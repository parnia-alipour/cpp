#include <iostream>
using namespace std;
int main() {
    double n1,n2;
    char op;
    cout<<"enter num:"<<endl;
    cin>>n1;
    cout<<"Enter num2: "<<endl;
    cin>>n2;
    cout<<" * or / or + or - ???: "<<endl;
    cin>>op;

    switch(op) {
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case '+':
            cout<<n1+n2<<endl;
            break;
         case '-':
            cout<<n1-n2<<endl;
            break;

    }

return 0;
}