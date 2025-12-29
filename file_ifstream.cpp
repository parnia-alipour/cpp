#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream f2 ("phone.txt");
    long number;
    string name,seartchname;
    bool find=false;
    cout<<"Enter your name: : ";
    cin>>seartchname;
    while (f2>>name>>number) {
        f2>>name;
        if (seartchname==name) {
            cout<<name<<' '<<number<<endl;
            find=true;
        }
    }
    if (!find) {
        cout<<"Not Found"<<endl;
    }
        return 0;

}