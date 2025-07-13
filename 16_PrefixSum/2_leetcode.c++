/*

// 724 
class Solution {
    public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int totalSum = 0;
        for(int i: nums) {
            totalSum += i;
        }
        
        for(int i = 0; i < n; i++) {
            int leftSum = 0;
            for(int j = 0; j < i; j++)  leftSum+=nums[j];
            int right = totalSum - leftSum - nums[i];
            if(leftSum == right) return i;   
        }
        return -1;
    }
};
*/


/*
// 724 easist way
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum) return i;
            leftSum += nums[i];
        }

        return -1;
    }
};

*/

/*
//  2640. Find the Score of All Prefixes of an Array

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> score(n,0);

        int maximum = 0;
        for(int i = 0; i < n; i++) {
            maximum = max(maximum , nums[i]);
            score[i] = nums[i] + maximum;
        }

        for(int i=1; i<n;i++) {
            score[i] = score[i]+score[i-1];
        }
        return score;

    }
};
*/