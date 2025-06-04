// 19/05/2025
/* 
// less efficient bubble sort code

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {5,-2,0,3,26,1,99,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }

    for(int i = 0; i < n-1; i++) { // n-1 passes
        // traverse
        for(int j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {  /// swap
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    cout<<endl;

     for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/


// quite optimized
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {5,-2,0,3,26,1,99,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }

    for(int i = 0; i < n-1; i++) { // n-1 passes
        // traverse
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {  /// swap
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    cout<<endl;

     for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/* 
// quite more optimized

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {5,-2,0,3,26,1,99,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }
    
    for(int i = 0; i < n-1; i++) { // n-1 passes
        // traverse
        bool flag = true;
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {  /// swap
                swap(arr[j] , arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) { // if swap did'nt happen so break
            break;
        }
    }

    cout<<endl;

     for(int i = 0; i < n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

