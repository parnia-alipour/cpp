#include <iostream>
using namespace std;
int main() {
    int n,fa=1;
    cout<<"Enter: ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        fa*=i;
    }
    cout<<n<<" "<<fa<<endl;
    return 0;

}