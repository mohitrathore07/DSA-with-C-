/*                                                                13/09/2024                                                            */

/* 
1
11
121
1331
14641

#include <iostream>
using namespace std;

int fact (int x) {
    int f = 1;
    for(int i = 2; i <= x; i++) {
        f *= i;
    }
    return f;
} 

int combination (int n , int r) {
    int ncr = fact(n) / (fact(r) * fact(n-r));
    return ncr;
}

int main () {
    int n;
    cin>>n;
    for(int i = 0; i <= n ; i++) {
        for(int j = 0 ; j <= i;j++) {
            cout<<combination(i , j); 
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
// M - 2
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i = 0; i <= n ; i++) {
        int curr = 1;
        for(int j = 0 ; j <= i;j++) {
            cout<<curr<<" ";
            curr = curr * (i - j ) / (j + 1);
        }
        cout<<endl;
    }
    return 0;
}
*/


// printing the addresses of the variable
/* 
#include <iostream>
using namespace std;

void fun (int a ,int b) {
    cout<<"address of x: "<< &a<<endl;
    cout<<"address of y: " << &b<<endl;
}

int main () {
    int x = 3;
    int y = 7;

    // cout<<&x<<endl; // address of x is place pe x variable bana hai 
    // cout<<&y<<endl; // address of x is place pe y variable bana hai 

    cout<<"address of x: "<< &x<<endl;
    cout<<"address of y: " << &y<<endl;
    fun(x , y);
    return 0;
}
*/