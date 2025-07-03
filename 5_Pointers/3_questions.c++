/*                                                              18/09/2024                                                                  */

// questions on functions

// find first and last digit using a function not returning anything
/* 
#include <iostream>
using namespace std;

void finddigit(int n , int* p1 , int* p2) {
    *p2 = n % 10;
    while(n>10) {
        n /= 10;
    }  
    *p1 = n;
    return;
}

int main () {
    int n;
    cin>>n;
    
    int first_digit , last_digit;
    int* ptr1 = &first_digit;
    int* ptr2 = &last_digit;
    finddigit(n , ptr1 , ptr2);
    cout<<first_digit<<" "<<last_digit;
}

*/

// NULL Pointer
/* 
#include <iostream>
using namespace std;

int main () {
    int* ptr1 = NULL ; 
    cout<<ptr1<<" "; // reserved address // 0x0

    int* ptr2 = 0 ; 
    cout<<ptr2<<" "; // reserved address // 0x0

    int* ptr3 = '\0' ; 
    cout<<ptr3<<" "; // reserved address // 0x0

    char a = '\0'; // NULL character ascii value 0
    cout<<int(a);
}
*/

// Double Pointers - used to store address of a single pointer
/* 
#include <iostream>
using namespace std;

int main () {
    int x = 25;
    int* ptr = &x;
    int** ptr1 = &ptr;

    cout<<x<<" "<<ptr<<" "<< ptr1<<" "<<&ptr;
}
*/