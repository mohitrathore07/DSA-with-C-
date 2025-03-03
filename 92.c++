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