#include <iostream>
using namespace std;
#include <fstream>
int main() {
    fstream f1("phone.txt",ios::out|ios::app);
    long number;
    string name;
    cout << "Enter Phone Number: and  for exist 0 ";
    while (1) {
        cout << "Enter Number : ";
        cin >> number;
        if (number == 0) {
            break;

        }
        f1<<number<<' ';
        cout<<"name";
        cin>>name;
        f1<<name<<' ';
        cout<<endl;

    }
    return 0;
}