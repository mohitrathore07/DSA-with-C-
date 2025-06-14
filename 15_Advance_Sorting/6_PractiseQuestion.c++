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