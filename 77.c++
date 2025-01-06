/*                                                              06-01-2025                                                             */


// TIME AND SPACE COMPLEXITY

// given an array of size n+1 consisting of intigers from 1 to n find the duplicate element in an array

#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> arr =  {6,3,2,4,6,7,1,5};

    int n = arr.size() - 1; 

    int sum = 0;

    for(int i = 0; i <= n;i++) {
        sum+=arr[i];
    }

    int s = ( n * (n+1) ) / 2;

    cout<<"this is the element which is same in array: "<<sum-s<<endl;
    return 0;
}