/* 
subarray

#include <iostream>
using namespace std;

int main() {
    int arr []  = {1,2,3,4,5};
    
    int n = 5;
    
    for(int st = 0; st < n; st++) {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout<<arr[i];
            }
            cout<<" "; 
        }
        cout<<endl;
    }
    return 0;

}
*/


/*
// subarray max sum - brute force method 

#include <iostream>
using namespace std;

int main() {
    int n = 2;
    int arr []  = {-2, -1};
    
    int maxSum = arr[0];
    for(int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout<<"max sum is: "<<maxSum;
    return 0;
    
}
*/

/*

max sum array
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        int curr = 0, maxSum = INT_MIN;
        for(int val: arr) {
            curr += val;
            maxSum = max(curr, maxSum);
            if(curr < 0) curr = 0; 
        }
        return maxSum;
    }
};
*/