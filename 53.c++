/*                                                           22/09/2024                                                             */

// Practise Questions array
/* 
#include <iostream>
using namespace std;

int main () {
    int n , product  = 1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    }
    
    for(int i = 1; i <= n-1; i++) {
        product *= arr[i];
    }
    cout<< product;
    return 0;
}
*/

/* 
// Q - 2
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    
    }
    for(int i = 1; i <= n-1; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout<<"Min is: "<<min;
    return 0;
}
*/

// Q - 3
/*
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    
    }
    for(int i = 1; i <= n-1; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout<<"Min is: "<<min;
    return 0;
}
*/



/* 
// Predict output - Q -6
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int sub[50] , i;
    for(int i = 0; i <= 48; i++) {
        sub[i] = i;
        cout<<sub[i]<<" ";
    }
    return 0;
}
*/


// Q - 4 , Q = 5 , Q - 2