/*                                                             21/sept/2024                                                                    */

// Arrays

/* 
#include <iostream>
using namespace std;

int main () {
    int arr[7] ;

    arr[0]  = 78;
    arr[1]  = 7;
    arr[2]  = 8;
    arr[3]  = 54;
    arr[4]  = 24;
    arr[5]  = 26;

    cout<<arr[0]<< " "<<arr[1]<<arr[2]<< " "<<arr[3]<< " ";
    return 0;
}

*/

/*
// Another way of initialization
#include <iostream>
using namespace std;

int main () {
    int arr[7] = {1,2,3,4,5,6,4};

    cout<<arr[0]<< " "<<arr[1]<<" "<<arr[2]<< " "<<arr[3]<< " ";
    return 0;
}
 */

/* 
// printing output and taking input in array
#include <iostream>
using namespace std;

int main () {
    // int arr[] = {5,8,1,3,4}; // without size diya hai to values bhi yahi par assign karna hai
    // cout<<arr[2];

    int arr1[2];
    cin>>arr1[0];
    cout<<arr1[0];
    return 0;
}
*/

// print elements using loops
/* 
#include <iostream>
using namespace std;

int main () {
    int array[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}

*/

/* 
/// printing and input using loops
#include <iostream>
using namespace std;

int main () {
    int array[5];

    // taking inputs
    for(int i = 0; i < 5; i++) {
        cin>>array[i];
    }

    // printing elements
    for(int i = 0; i < 5; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}
*/

// Basic Question video  - Array
/* 
// Q - 1
#include <iostream>
using namespace std;

int main () {
    int arr[5] = { 54,21,90,24,87};

    for(int i = 0; i < 5; i++) {
        if(arr[i] <= 35) {
            cout<< i<< " ";
        }
    }
    return 0;
}
*/

