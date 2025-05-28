// quiz  question Q 6 

/*
#include <iostream>
using namespace std;

int main () {
    char ch = '9';
    int num = ch - '0';
    cout<<num;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main () {
    int x = 10;
    int y = ++x;
    cout<<x<<endl; // 11
    cout<<y<<endl; // 11
    y += x--; // 11 + 11 = 22 then x-1 so x = 10
    cout<<y<<endl;
    return 0;
}