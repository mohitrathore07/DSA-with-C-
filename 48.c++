/*                                                              17/09/2024                                                                      */

// pass by value
/* 
#include <iostream>
using namespace std;

void swap(int a , int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main () {
    int a = 4, b = 8;
    swap(a , b);
    cout<<a<<" "<<b;
    return 0;
}
*/

// pass by reference
/* 
#include <iostream>
using namespace std;

void swap(int* x , int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main () {
    int a = 4, b = 8;
    swap(&a , &b);
    cout<<a<<" "<<b;
    return 0;
}
*/

//  pass by reference
/* 
#include <iostream>
using namespace std;

void swap(int &x , int &y) { // address liya isme 
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main () {
    int a = 4, b = 8;
    swap(a , b);
    cout<<a<<" "<<b;
    return 0;
}
*/

/* 
// Arithmatic Operations in pointers
#include <iostream>
using namespace std;

int main () {
    int x = 4;
    int* ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl; // different address x 4 ke baad 4 byte aage jo bhi address hai hexadeciaml vice
    return 0; 
}
*/

/*
#include <iostream>
using namespace std;

int main () {
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; // 4
    ptr = ptr + 1;
    cout<<*ptr<<endl;  // yaha pe hmne phle address 1 se increase kiya jo ki 4 se aage jayega garbage value bcz waha koi value nhi hai
    return 0; 
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; // 4
    *ptr = *ptr + 1;
    cout<<*ptr<<endl;  // 5
    return 0; 
}
*/

/*
// Predict the output - doubt
#include <iostream>
using namespace std;

int main () {
    int x = 4;
    int* ptr = &x;

    int y = ++*ptr;
    cout<<x<<" "<<y<<endl; // 5 5 

    int z = *ptr++;
    cout<<x<<" "<<z; // 5 5   it only increments the pointer ptr after dereferencing it.

    return 0; 
}
*/

