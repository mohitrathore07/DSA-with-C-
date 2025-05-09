/*                                                                 15\07\2024                                                                    */

// predict the output

#include <iostream>
using namespace std;

int main () {
    int num;
    int p = 5 , q = 10;
    p += q -= p; //  right first solve hoga 
    // q = q - p 10 - 5 = 5
    // p += (q -= p) 5 + 5 -> 10
    cout << p <<" "<<q<<endl;  

    // predict - 2
  
    return 0;
}

