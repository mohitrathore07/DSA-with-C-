/*                                                              18/09/2024                                                                  */

/*  // product of two numbers using pointers

#include <iostream>
using namespace std;

int product( int *n1 , int *n2) {
    return *n1 * *n2;
}

int main () {
    int n,m;
    cin>>n>>m;
    int *n1 = &n;
    int *n2 = &m;
    int res =  product(n1,n2);
    cout<<res;
    return 0;
}
*/

// Q - 3 
/* 
#include <iostream>
using namespace std;

int main () {
    int n = 10 , m = 20;
    int* ptr = &n;
    m = *ptr + 1;
    ptr = &m;

    cout<<*ptr<<" "<<n<<" "<<m;
    return 0;
}

*/
/*
Q - 4
#include <iostream>
using namespace std;

int main () {
    int n = 10 , m = 20;
    int* ptr = &n;
    int* ptr1 = &m;
    *ptr = *ptr1;
    cout<<*ptr<<" "<<n<<" "<<n<<" "<<m;
    return 0;
}
*/
