// 02-03-2025

/*
// search in a rotated array - leetcode 33

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int lo = 0;
            int hi = n-1;
            int pivot = -1;
            if(n == 2) {
                if(nums[0] == target) return 0;
                else if(nums[1] == target) return 1;
                else return -1;
            }
            while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if(mid == 0) lo = mid + 1;
                else if(mid == n-1) hi = mid - 1;
                else if (nums[mid] < nums[mid+1] && nums[mid] < nums[mid-1]) {
                    pivot = mid;
                    break;
                }
                else if (nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) {
                    pivot = mid + 1;
                    break;
                }
                else if(nums[mid] > nums[hi]) lo = mid + 1;
                else hi = mid - 1;
            }

            if(pivot == -1) {
                lo = 0;
                hi = n - 1;
                while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == target) {
                    return mid;
                }
                else if (nums[mid] > target) hi = mid - 1;
                else lo = mid + 1;
               }
               return -1;
            }

            if(target >= nums[0] && target <= nums[pivot - 1] ) {
                lo = 0;
                hi = pivot;
                while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == target) {
                    return mid;
                }
                else if (nums[mid] > target) hi = mid - 1;
                else lo = mid + 1;
               }
            }
            else {
                lo = pivot;
                hi = n - 1;
                while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == target) {
                    return mid;
                }
                else if (nums[mid] > target) hi = mid - 1;
                else lo = mid + 1;
            }
        }
        return -1;
    }
};
*/

/*
// Find K closest element - 658 leetcode
class Solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            int lo = 0;
            int hi = arr.size()-1;
            int lb = 0;
            int ub = 0;
            bool flag = false; // target not found case
            vector<int>ans;
            int n  = arr.size();
            int mid = -1;
            if(x < arr[0]) {
                int i = 0;
                while (ans.size() != k)
                {
                    ans.push_back(arr[i]);
                    i++;
                }
            }
            else if (x > arr[n-1]) {
                int i = n-1;
                while (ans.size() != k)
                {
                    ans.push_back(arr[i]);
                    i--;
                }
            }
            else {
                while(lo <= hi) {
                    mid = lo + (hi - lo) / 2;
                    if(arr[mid] == x) {
                        flag = true; // meaning target found
                        break;
                    }
                    else if (arr[mid] > x) hi = mid - 1;
                    else lo = mid + 1;
                }

                if(flag == true) {
                    lb = mid - 1;
                    ub = mid + 1;
                    ans.push_back(x);
                }
                else {
                    lb = hi;
                    ub =  lo;
                }

                while( ans.size() != k) {
                    if(lb < 0) {
                        ans.push_back(arr[ub]);
                        ub++;
                    }
                    else if(ub > n-1) {
                        ans.push_back(arr[lb]);
                        lb--;
                    }

                    else if( abs(x - arr[lb]) <= abs(x - arr[ub])) {
                        ans.push_back(arr[lb]);
                        lb--;
                    }
                    else {
                        ans.push_back(arr[ub]);
                        ub++;
                    }

                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
    };
*/

// leetcode 633



// 05/03/2025
/* 
class Solution {
    public:
        bool check(int mid,vector<int> &weights,int days){
            int n = weights.size();
            int m = mid;
            int count = 1;
            for(int i = 0; i < n; i++) {
                if(m>= weights[i]) {
                    m -= weights[i];
                } else {
                    count++;
                    m = mid;
                    m -= weights[i];
                }
            }
            if(count > days) return false;
            else return true;
        }
        int shipWithinDays(vector<int>& weights, int days) {
           int n = weights.size();
           int max = INT_MIN;
           int sum = 0;
    
           for(int i = 0; i < n;i++) {
                if(max<weights[i]) max = weights[i];
                sum += weights[i]; 
           }
    
           int low = max;
           int high = sum;
           int minCapacity = sum;
           while(low <= high) {
            int mid = low+ (high - low) / 2;
            if(check(mid , weights, days)) {
                minCapacity = mid;
                high = mid - 1;
            } 
            
            else low = mid + 1; 
           }
            return minCapacity;
        }
    };

*/



// 13/03/2025

/*
// leetcode 2187

class Solution {
public:
    bool check(vector<int>& time ,int totalTrips ,long long mid) {
        long long trips = 0;
        int n = time.size();

        for(int i = 0; i<time.size();i++) {
            trips += mid/(long long)time[i];
        }

        if(trips < totalTrips) return false;
        else return true;
        }
    long long minimumTime(vector<int>& time, int totalTrips) {
          long long lo = 1;
          long long ans = -1;
          int mx = -1;

          int n = time.size();
          for(int i = 0; i<time.size();i++) {
            mx = max(mx, time[i]);
          } 

          long long hi = (long long)mx * (long long )totalTrips;
          while(lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if(check(time , totalTrips , mid) == true) {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1; 
          }
    return ans;
    }
};

*/