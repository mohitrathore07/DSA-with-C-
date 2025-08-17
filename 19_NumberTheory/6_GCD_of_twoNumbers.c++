#include <iostream>
#include <algorithm>
using namespace std;

// int gcd (int a , int b) {
//     if(b <= 0 ) return a;
//     int remainder = a % b;
//     a = b;
//     b = remainder;
//     return gcd(a , b);
// }


// or 

int gcd (int a , int b) {
    if(b == 0 ) return a;
    return gcd(b , a%b);
}


int main () {
    int res = gcd(4,12);
    cout<<res<<endl;
    int res2 = gcd(18,12);
    cout<<res2<<endl;

    // LCM 
    cout<< 12 * 18 / gcd(12,18)<<endl;

    cout<< __gcd(12,18)<<endl;
    return 0;
}