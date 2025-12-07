#include <iostream>
#include <ostream>
#include<string>
using namespace std;
int main() {
    int a,b,mohasbh;
    cout<<"enter brithday year:"<<endl;
    cin>>a;
    cout<<"enter  year:"<<endl;
    cin>>b;
    mohasbh=b-a;
    if (mohasbh<=20) {
        cout<<"nojavan"<<endl;
    }
    else if (mohasbh<=50)
        cout<<"javan"<<endl;
    else
        cout<<"pir"<<endl;
    {
    }
}