#include <iostream>
#include<string>
using namespace std;

void user(){
        int a;
         string b,
          c;
         cout<<"enter your age:";
         cin>>a;
         cout<<"enter your name:";
         cin>>b;
         cout<<"enter your last_name:";
         cin>>c;
         cout<<"name:"<<b<<","<< "last_name"<<","<<c<<","<<"age"<<a<<endl;

     }
int main(){
    user();
    return 0;
}