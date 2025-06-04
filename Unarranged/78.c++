/*                                                              13-01-2025                                                             */

// Recursion
/* 

// n to 1 print

#include <iostream>
using namespace std;

void printf(int n ) {
    if ( n == 0) return;
    cout<<n<<endl;
    printf(n-1);
}
int main () {
    int n = 5; 
    printf(n);
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

void printf(int i ,int n ) {
    if ( i > n) return;
    cout<<i<<endl;
    printf(i+1,n);
}
int main () {
    int n = 5; 
    int i = 1;
    printf(i,n);
    return 0;
}

*/

////     14/01/2025

/* 

//  1 to n sum using recursion - dry run copy
#include <iostream>
using namespace std;

void Sum1toN(int sum , int n ) {
    if(n == 0 ) {
        cout<<"sum is: "<<sum;
        return;
    }
    Sum1toN(sum+n ,n-1);
}

int main () {
    int n = 5;
    Sum1toN(0 , n);
    return 0;
}
*/

/*
// method 2 above

#include <iostream>
using namespace std;

int Sum1toNMethod2(int n ) {
    if(n == 0 ) { 
        return 0;
    }
    return n + Sum1toNMethod2(n-1);
}

int main () {
    int n = 5;
    cout<<Sum1toNMethod2(n);
    return 0;
}
*/


// a ^ b calculate

#include <iostream>
using namespace std;

int powercalculte ( int a , int b) {
    if (a == 0 && b == 0) {
        cout<<"0 raise to power 0 is not define: ";
    }
    if (b == 0){
        return 1;
    }
    return a*powercalculte(a,b-1);
}

int main () {
    int a = 2 , b = 0;
    powercalculte( a , b);
    return 0;
}