/*                                                               16/09/2024                                                                   */
// Pointers

/* 
// sizeof()
#include <iostream>
using namespace std;

int main () {
    cout<<sizeof(int)<<" "; // data type ka size calculate
    cout<<sizeof(int)<<" "; // data type ka size calculate
    cout<<sizeof(long long)<<" "; 
    cout<<sizeof(double)<<" "; 
    return 0;
}
*/

// address of a variable
/* 
#include <iostream>
using namespace std;

int main () {
    int x;
    cout<<&x; 
    return 0;
}
*/

/* 
// creating pointers
#include <iostream>
using namespace std;

int main () {
    int x;
    int* p = &x;  // pointer created
    // int *p = &x;  // also we can write this 

    cout<<&x<<" "<<p<<endl; 

    float y = 4.5;
    float *q = &y; // float ke liye  float wala hi pointer int me nhi kar skte hai 
    cout<<y<<" "<<*q;
    return 0;
}
*/

/* 
// dereference operator
#include <iostream>
using namespace std;

int main () {
    int x = 14;
    int *p = &x;
    cout<<*p; // iske address pe jo value hai usko print
    return 0;
}
*/

/* changing values 
#include <iostream>
using namespace std;

int main () {
    int x = 14;
    int *p = &x;
    cout<<x<<endl; // 14

    *p = 96; // is address pe jo value hai usko change kr do 
    cout<<x<<endl; // 96
    return 0;
}
*/

/* 
// calculate sum
#include <iostream>
using namespace std;

int main () {
    int x = 14;
    int y = 5;

    int* p1 = &x;
    int* p2 = &y;
    cout<<*p1 + *p2;
    return 0;
}
*/

/* 
// pointers se input 
#include <iostream>
using namespace std;

int main () {
    int x, y;

    int* p1 = &x;
    int* p2 = &y;
    
    cout<<"Enter num 1: ";
    cin>>*p1;
    cout<<"Enter num 2: ";
    cin>>*p2;

    cout<<"sum is: "<<*p1 + *p2<<endl;
    cout<<"sum is: "<<x + y;
    return 0;
}
*/

