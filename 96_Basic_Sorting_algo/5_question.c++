
// Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after replacing each and every index of the array by |aᵢ - K| where i ∈ [1, n], results in a sorted array. If no such integer exists that satisfies the above condition then return -1.
// For example, with the input array [0, 1, 2, 5, 4, 3], the goal is to find a value K such that when each element aᵢ in the array is replaced with |aᵢ - K|, the resulting array is sorted. If no such K exists, the function should return -1.

// find the range of k

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {5,3,10};

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bool flag = true;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MIN);

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] >= arr[i+1])  { // min
            kmin = max<float>(kmin , (arr[i] / 2.0));
        }
        else { // max
            kmax = min<float>(kmax , (arr[i] + arr[i+1])/2.0);
        }
        if(kmin>kmax) {
            flag = false;
            break;
        }
    }

    if(flag == false) cout<<-1;
    else if(kmin == kmax) {
        if(kmin - (int) kmin == 0) {
            cout<<"There is only one value of k: " << kmin;

        }
        else {
            cout<<-1;
        }
    }
    else {
        if(kmin-(int)kmin>0) {
            kmin = (int)kmin + 1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }
    return 0;
}
