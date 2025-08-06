/*

713 

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0, count = 0;

        while(j < n) {
            int product = 1;
            int i = j + 1;
            if(nums[j] < k) {
                count++;
                
            }
            product *= nums[j];
            while(i < n) {
                product *= nums[i];
                if(product >= k) break;
                count++;
                i++;
            }
            j++;
        } 
        return count;
    }
};
*/