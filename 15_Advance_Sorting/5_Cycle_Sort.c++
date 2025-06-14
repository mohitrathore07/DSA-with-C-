/*
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,1,6,2,5,3};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cyclic sort
    int i = 0;
    while (i<n)
    {
        int correctIdx = arr[i] - 1;
        if(i == correctIdx) i++;
        else swap(arr[i] , arr[correctIdx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
    */

    /*
    // 268 leetcode
    #include <iostream>
    using namespace std;
    
    int main() {
        int arr[] = {0,1,3};
        int n = sizeof(arr) / sizeof(arr[0]);
   
        int expectedSum = n * (n + 1) / 2;
        int actual = 0;
        int i = 0;
        while (i<n)
        {
            actual  += arr[i];
            i++;
        }
        cout<<"Missing num is: "<< expectedSum - actual;
        return 0;
    } 
    */


    /* 268 using cyclic sort - O(n) hi hogi T.C.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {3,0,1};
    int n = v.size();
    int i  = 0;
   while (i < n)
   {
     int correctIdx = v[i];
     if(correctIdx == i || v[i] == n) i++;
     else swap(v[i] , v[correctIdx]);
   }
   bool flag = false;
   for(int i = 0 ; i < n ; i++) {
    if(v[i] != i) {
        cout<<"missing is: "<<i;
        flag = true;
        break;
    }
   }
   if(flag == false) {
    cout<<n;
   } 

 
   
   return 0;
}
   */


/*  duplicate number traditional method
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1,3,4,2,2};
    bool flag = true;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i] - v[j] == 0) {
                flag = false;
                cout<<"missing number is: "<<v[i];
                break;
            } 
        }    
    }
    if(flag) cout<<"not found";
    
   return 0;
}*/

 
/* 
class Solution {
    public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if(n <= 1) return ans;
        int i = 0;
        while( i < n) {
            int correctPos = nums[i] - 1;
            if(correctPos == i  || (nums[i] <= 0 && nums[i] >= n) || nums[i] == nums[correctPos]) i++;
            else swap(nums[correctPos] , nums[i]);
        } 
        for (int i = 0; i < n; i++)
        {
            if(nums[i] != i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};
*/
