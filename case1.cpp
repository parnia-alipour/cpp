#include<iostream>
using namespace std;
int main() {
    char s;
    cout<<"Enter : ";
    cin>>s;
    switch (s) {
        case 'E':
            cout<<"English"<<endl;
            break;
        case 'P':
            cout<<"Persian"<<endl;
            break;
        case 'T':
            cout<<"Turkish"<<endl;
            break;
    default:
    cout<<"????"<<endl;
}
        return 0;
    }
