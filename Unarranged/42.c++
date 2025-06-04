/*                                                             11/09/2024                                                                       */

// Functions

/* 
#include <iostream>
using namespace std;

void greet() {
    cout<<" hello";
    cout<<" have a nice day";
}
int main ( ) {
    greet();
    greet();
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

void starTriangle(int x) {
    for(int i = 1; i <= x ; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main ( ) {
    starTriangle(3);
    starTriangle(2);
    return 0;
}
*/

#include <iostream>
using namespace std;

int sum (int x , int y) {
    return x+y;
}

int main () {
    cout<<sum(5,7);
    return 0;
}