#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char line[80];
    do {
        cin.getline(line,80,',');

        if (*line) {
            cout<<line<<endl;
        }
        }while (*line);
        return 0;
    }
