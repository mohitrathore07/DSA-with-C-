/*
1052

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int prevLoss = 0;
        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 1) prevLoss += customers[i];
        }

        int maxLoss = prevLoss;
        int maxIdx = 0;
        int i = 1;
        int j = minutes;
        while(j < n) {
            int currLoss = prevLoss;
            if(grumpy[j] == 1) currLoss += customers[j];
            if(grumpy[i-1] == 1) currLoss -= customers[i-1];

            if(maxLoss<currLoss) {
                maxLoss = currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        }
        for(int i = maxIdx; i < maxIdx+minutes; i++) {
            grumpy[i] = 0;
        }
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 0) sum+=customers[i];
        }
        return sum;
    }
};

*/

/*
 209 1st way
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int prefix[n+1];
        prefix[0] = 0;
        int  length = 0;
        for(int i=0; i < n;i++){
            prefix[i+1] = nums[i] + prefix[i];
        }

        int lo = 0 , hi = n;
        while(lo <= hi) {
            int mid = lo + (hi - lo) /2;
            if(prefix[mid] > target) hi = mid-1;
            else if (prefix[mid] > target)
        }
        return count;
    }
};
*/

/*
209 brute force approach

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1,4,4};
    int n = 3;
    int target = 4;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int size = 0;
        for (int j = i; j < n; j++)
        {
            if (sum < target) {
                sum += arr[j];
                size++;
            }
            else break;
        }
        if(size != 0 && sum >= target) ans = min(ans , size);
    }
    cout<<ans;
    return 0;
}
*/

/*
/// agr size > ans to break bcz hme minimum length find karni h  - quite optimized way
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1,2,4,6,3,4,3};
    int n = 7;
    int target = 10;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int size = 0;
        for (int j = i; j < n; j++)
        {
            if(size > ans) break;
            if (sum < target) {
                sum += arr[j];
                size++;
            }
            else break;
        }
        if(size != 0 && sum >= target) ans = min(ans , size);
    }
    cout<<ans;
    return 0;
}
*/

/* 
209 solve using - sliding window technique
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int minLen = INT_MAX;

        int len;
        int sum = 0;
        while(j < n) {
            sum += nums[j];
            while(sum >= target) {
                len = j - i + 1;
                minLen = min(minLen, len);
                sum -= nums[i];
                i++;
            } 
            j++;
        }
        if(minLen == INT_MAX) return 0;
        return minLen;
   }
};

*/


/*
leetcode 1004

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0, i = 0, j = 0;
        int ans = INT_MIN , len;
        while(j < n) {
            if(nums[j] == 1) j++;
            else {
                if(flips < k) {
                    flips++;
                    j++;
                }
                else {
                    len = j - i;
                    ans = max(len ,ans);
                    while(nums[i] == 1) i++;
                    i++; 
                    j++;
                }
            }
        }
        len = j - i;
        ans = max(len ,ans);
        return ans;
    }
};
*/

/*
leetcode 1493  - same as above way

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0 , len, flip = 0;
        int ans = INT_MIN ;
        while(j < n) {
            if(nums[j] == 1) j++;
            else {
                if(flip == 0) {
                    flip = 1;
                    j++;
                }
                else {
                    len = j - i;
                    ans = max(ans , len);
                    while(nums[i] == 1) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        ans = max(ans , len);

        return ans-1;
    }
};
*/


/*
leetcode 1493 - different way

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0,count = 0, zeroPos = -1;
        int ans = INT_MIN;
        while(j < n) {
            int prev = zeroPos;
            if(nums[j] == 0) {
                count++;
                zeroPos = j;
            }
            if(count <= 1) j++;
            else {
                ans = max(ans , j - i);
                i = prev+1;
                count--;
                j++;
            }
        }
        ans = max(ans , j-i);

        return ans-1;
    }
};
*/

/*
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

/*

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

/*

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       if (k <= 1) return 0;
    int prod = 1, result = 0, left = 0;

    for (int right = 0; right < nums.size(); ++right) {
        prod *= nums[right];
        while (prod >= k) {
            prod /= nums[left++];
        }
        result += (right - left + 1);
    }

    return result;
    }
};

*/

/*
2302
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0 , ans = 0;
        int i = 0, j = 0 , n = nums.size();
        while(j < n) {
            sum += nums[j];

            while(i <= j && sum * (j - i + 1) >= k) {
                sum -= nums[i];
                i++;
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
    }
};
*/

/*
1248. Count Number of Nice Subarrays
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);    
    }
    int atmost(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0,  count = 0;
        int j = 0;

        while(j < n) {
            if(nums[j] % 2 == 1) k--;
            while(k < 0) {
                if(nums[i] % 2 == 1) k++;
                i++;
            }
            count += (j-i+1);
            j++;
        }
        return count;
    }
};
*/

/*
930. Binary Subarrays With Sum

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);  
    }
    int atmost(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0,  ans = 0 , j = 0 , sum = 0; 
        while(j < n) {
            sum += nums[j];
            while (i <= j && sum > k) {
                sum -= nums[i++];
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
    }
};
*/

/*

1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
        int i = 0, j = 0,sum = 0 ,count = k , ans = 0;
        while(j < n) {
            sum += nums[j];
            k--;
            while(k<0) {
                sum -= nums[i++];
                k++;
            }
            if(k==0) {
                double avg = (double)sum / count;
                if(avg >= threshold) ans++;
            }
            j++;
        }
        return ans;
    }
};
*/