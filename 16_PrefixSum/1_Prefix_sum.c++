
// prefix sum - cpy concept 22/june/2025

// leetcode 1480
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,10,1};
//     int n = 5;
//     vector <int> v(n);
//     int sum = arr[0];
//     v[0] = sum;
//     for (int i = 1; i < n; i++)
//     {
//         sum += arr[i];
//         v[i] = sum;
//     }
    
//     for (int i: v) 
//     {
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

/* 
// above effiecient way 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v = {3,1,2,10,1};
    int  n = v.size();
    
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i] + v[i-1];
    }
    
    for (int i: v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
*/

/* 
// array partition  into 2 contiguous array of equal sum

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v = {1,2,3,4,5,10,5};

    for (int i = 1; i <v.size(); i++)
    {
        v[i] = v[i] + v[i-1];
    }
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if((2*v[i]) == v[v.size()-1]) {
            idx = i;
            break;
        }
    }
    if(idx != -1) cout<<"yes it can be partitioned: "<< idx;
    else cout<<"no it can be partitioned ";
    
    return 0;
}
*/

// leetcode 238 product of array except itself

// m - 1 out of 3   - we will use 3 vectors in this method
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n);
        vector<int> suff(n);
        vector<int> ans(n);

        // prefix product array
        int p = nums[0];
        pref[0] = 1;
        for(int i = 1; i < n; i++) {
            pref[i] = p;
            p *= nums[i];
        }

        // suffix product array
        p = nums[n-1];
        suff[n-1] = 1;
        for(int i = n-2; i >= 0; i--) {
            suff[i] = p;
            p *= nums[i];
        }

        // ans array
        for(int i = 0; i < n; i++) {
            ans[i] = pref[i] * suff[i];
        }
        return ans;
    }
}; 
*/



/*
// m - 2 out of 3   - we will use 2 vectors in this method

    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> pref(n);
            vector<int> suff(n);
            

            // prefix product array
            int p = nums[0];
            pref[0] = 1;
            for(int i = 1; i < n; i++) {
                pref[i] = p;
                p *= nums[i];
            }

            // suffix product array
            p = nums[n-1];
            suff[n-1] = 1;
            for(int i = n-2; i >= 0; i--) {
                suff[i] = p;
                p *= nums[i];
            }

            //  array
            for(int i = 0; i < n; i++) {
                suff[i] = pref[i] * suff[i];
            }
            return suff;
        }
    };
*/

/* 
// not much effiecient time limit exceeds on large array
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> nums = {1,2,3,4};
    int n = nums.size();
    vector <int> ans(n);
    
    for (int i = 0; i < n; i++)
    {
        int l = i-1;
        int r = i+1;
        int lp = 1;
        int rp = 1;
        
        while (l >= 0)
        {
            lp *= nums[l];
            l--;
        }
        while (r < n)
        {
            rp *= nums[r];
            r++;
        }
        ans[i] = lp * rp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
    */


/* also good but time limits exceeds on larger arrays

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> nums = {1,2,3,4};
    int n = nums.size();
    vector <int> ans(n);
    
    for (int i = 0; i < n; i++)
    {
        int p = 1;
        for (int j = 0; j < n; j++)
        {
            if(j==i) continue;
            p *= nums[j]; 
        }
        ans[i] = p;
    }
    
    for(int i: ans) {
        cout<<i<<" ";
    }
    return 0;
}
*/


/*
 quite good way
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n);
        vector<int> suff(n);
        

        // prefix product array
        int p = nums[0];
        pref[0] = 1;
        for(int i = 1; i < n; i++) {
            pref[i] = p;
            p *= nums[i];
        }

        // suffix product array
        p = nums[n-1];
        for(int i = n-2; i >= 0; i--) {
            pref[i] *= p;
            p *= nums[i];
        }

        return pref;
    }
};


*/