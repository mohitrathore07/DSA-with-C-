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