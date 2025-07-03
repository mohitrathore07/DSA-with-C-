/*                                                             09/07/2024                                                                                  */

// Question - calculating the radius

// #include <iostream>
// using namespace std;
// int main() {
//     float r = 8;
//     float a;
//     a = 3.1415*r*r;
//     cout<<a; 
//     return 0;
// }

                                                           // Naming Rules //

#include <iostream>
using namespace std;

int main () {
    /*1. variables can start from an alphabet or  underscore or $ */

    int A = 5;
    int a = 6;
    int _r = 7;
    int $q = 8;

    cout<<A<<endl;
    cout<<a<<endl;
    cout<<_r<<endl;
    cout<<$q<<endl;

    /* 1. Special characters except _ and $ not allowed */
    // int  1x = 4  // not allowed
    // cout<<1x;

    int x1 = 4; // valid
    cout<<x1<<endl;

    // 2. special characters except _ and $ not allowed
    // int x,y = 4,5; // not allowed
    // cout<<x,y;

    // 3. some perticular keywords are not allowed
    // int int = 4;  not allowed
    // cout<<int;

    int intt = 5;
    cout<<intt<<endl;

    int Int = 4; // valid   
    cout<<Int<<endl;

    return 0;
}