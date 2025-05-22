/// leetcode 169

/*
// time limit exceeds on very big inputs
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> nums = {2,2,1,1,1,2,2};

    int occurance = 0;
    int idx = 0;

    
    for (int i = 0; i < nums.size()-1; i++)
    {
        int occur = 0;
        for (int j = i+1; j < nums.size(); j++)
        {
            if(nums[i] == nums[j]) {
                occur++;
            }
        }
        if(occurance < occur) {
            occurance = occur;
            idx = nums[i];
        }
    }
    
    cout<< idx <<" ";
    return 0;
}
    */


/* 
time limit exceeds

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1) return nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            int occur = 1;
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j]) {
                    occur++;
                }
            }
            if(occur > (n/2)) return nums[i];
        }
        return -1;
    }
};
*/

/* 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int occur = 1;
        if(nums.size() == 1) return nums[0];
        sort(nums.begin() , nums.end());

        for (int i = 1; i < nums.size(); i++)
        {
        if(nums[i] == nums[i-1]) {
            occur++;
        }
        if(occur > (n/2)) return nums[i];
        if((nums[i] != nums[i-1])) occur = 1;
        }
        return -1;
    }
};
*/

/*  solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        return nums[(nums.size() / 2)];
    }
};

*/

// replace karna hai 0  1 2 ---- min values ke according min pr 0 then 2nd min 1 and so on - copy 22 05 25 date

/*
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int arr[] = {19,12,23,8,16};
    int n = 5;

    vector<int> v(n,0);// visited check ke liye
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min  = INT_MAX;
        int mindx = -1;

        for (int j = 0; j < n; j++)
        {
            if(v[j] == 1) continue;
            else {
                if(min > arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx]  = 1; // visited
        x++;
    }

    for(int i: arr) {
        cout<<i<<" ";
    }
    
    return 0;
}

*/
/*
// if negative element nhi h so ye kar skte h 
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int arr[] = {19,12,23,8,16};
    int n = 5;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] <= 0) continue;
            else {
                if(min > arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -1 * x;
        x++;    
    }

    for(int i: arr) {
        cout<< -1 * i<<" ";
    }
    
    return 0;
}

*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>s = {1,1};
    vector<int>g = {1,2,3};

    sort(g.begin() , g.end());
    sort(s.begin() ,s.end());

    if(g[0] > s[s.size() - 1]) cout<<"eae";

    
    // int csize = g.size();
    // int esize = s.size();

    // int res = 0;
    // for (int i = 0; i < csize; i++)
    // {
    //     int j = 0;
    //     while (j < esize)
    //     {
    //         if(s[j] <= 0) {
    //             j++;
    //             continue;
    //         }
    //         if(g[i] <= s[j]) {
    //             res++;
    //             s[j] = -1;
    //             break;
    //         }
    //         j++;
    //     }
            
    // }
    // cout<<res;
    
    return 0;
}
*/

/*

// leetcode 455 assign cookies - copy for explanation  

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {  
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0;
        int j = 0;
        int res = 0;
        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j]) {
                    res++;
                    i++;  
                }
                j++;  
            
        }
        return  res;
    }
};
*/