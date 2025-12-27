#include <iostream>
using namespace std;
int main() {
    int day;
    cout<<"enter:"<<endl;
    cin>>day;
    switch (day) {
        case 0:
            cout<<"Sunday"<<endl;
            break;

        case 1:
            cout<<"Saturday"<<endl;
            break;
        case 2:
            cout<<"monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednesday"<<endl;
            break;
        case 5:
            cout<<"Thursday"<<endl;
            break;
        case 6:
            cout<<"Friday"<<endl;
            break;
        default:
            cout<<"Error!!!!!!!!! please enter 1__7:";

    }
    return 0;


}