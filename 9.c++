/*                                                                 15\07\2024                                                                    */

// predict the output

#include <iostream>
using namespace std;

int main () {
    int num;
    int p = 5 , q = 10;
    p += q -= p; // left to right solve hoga
    cout << p <<" "<<q<<endl;  

    // predict - 2
    int  i = 2, j = 3 , k , l;
    float a , b;
    k = i / j * j; // 0 
    l =  j / i * i; // 2
    a = i / j * j; // 0
    b = j / i * i; // 2
    cout<<k<<" "<<l<<" "<<a<<" "<<b<<endl;
    return 0;
}

