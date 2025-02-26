//  25 feb 2025

// Linked Lists 

/* 
// binary search   - leetcode 78
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,2,4,5,9,15,18,21};
    int target = 18;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            cout<<"element at: "<<mid;
            break;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
      
    return 0;
}
*/

/// 26 feb

/* 
// lower bound question - dry run copy
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,2,4,5,9,15,18,21 , 24};
    int target = 25;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    bool flag = false;
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            flag = true;
            cout<<"element at: "<<mid-1;
            break;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) cout<<arr[high]; 
    return 0;
}
*/

/* 

// first occurance - bad method
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,2,2,3,3,3,3, 4 , 4 , 5, 8 , 9};
    int target = 3;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    bool flag = false;
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            // flag == true;
            // cout<<"element at: "<<mid-1;
            // break;
            int last = mid;
            while(arr[mid] == target ) {
                mid--;
            }
            flag = true;
            cout<<"first : "<<mid+1;
            cout<<"last at: "<<last;
            break;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) cout<<"-1"; 
    return 0;
}
    */

/* 
// first occurance of an element - best method
#include <iostream>
using namespace std;

int main () {
    int arr[] = {5,7,7,8,8,10};
    int target = 6;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    bool flag = false;

    if(high == 0) {
        cout<<"-1 -1";
        return 0;
    }
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            if(arr[mid-1] != target) {
                flag = true;
                cout<<mid;
                break;
            }
            else {
                high  = mid - 1; 
            }
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) cout<<"-1 -1"; 
    return 0;
}
*/

// first nd last element position