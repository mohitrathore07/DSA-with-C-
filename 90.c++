//  25 feb 2025

// Linked Lists 

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