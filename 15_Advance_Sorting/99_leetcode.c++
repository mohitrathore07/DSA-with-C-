/* 645 -  Set Mismatch
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
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
    return ans;
    }
};
*/

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
