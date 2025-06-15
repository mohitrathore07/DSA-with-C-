// leetcode 645 and practise question 2 - cyclic sort
/*
#include<iostream>
#include<vector>
using namespace std; 

int main() {
    vector<int> nums = {1,1};
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    while (i < nums.size())
    {
        int correctPos = nums[i] - 1;
        if(correctPos == i || nums[i] == nums[correctPos] || (nums[i] <= 0 && nums[i] >= n)) i++;
        else swap(nums[correctPos] , nums[i]);
    }
    
    
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != i+1) {
            ans.push_back(nums[i]);
            ans.push_back(i+1);
            break;
        }
    }
    for(int i : ans) cout<<i<<" ";
    
    return 0;
}
*/


/*
/// Merge sort practise questions 

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b , vector<int>& v) {
    int i = 0 , j = 0 , k = 0;

    while (i<=a.size() && j < b.size())
    {
        if(a[i] >= b[j]) v[k++]  = a[i++];
        else v[k++] = b[j++]; 
    }
    while (i<a.size())
    {
        v[k++] = a[i++];
    }
    
    while (j < b.size())
    {
        v[k++] = b[j++];
    }
    
}

void mergeSort(vector<int> &v) {
    int n = v.size();
    if(n==1) return;

    int s1 = n/2 , s2 = n - n/2;
    vector<int> a(s1) , b(s2);
    
    for (int i = 0; i < s1; i++)
    {
        a[i] = v[i];
    }
    
    for (int i = 0; i < s2; i++)
    {
        b[i] = v[i+s1];
    }
    
    mergeSort(a);
    mergeSort(b);
    
    merge(a,b,v);
}

int main() {
    vector<int> v = {1,2,3,4,5};
    
    mergeSort(v);
    
    for(int i: v) {
        cout<<i<<" ";
    }
    return 0;
}
*/


/// Quick sort practise questions 

