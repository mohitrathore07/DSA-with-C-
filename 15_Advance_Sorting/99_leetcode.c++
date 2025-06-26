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


/*
class Solution {
public:
    string addBinary(string a, string b) {
         string c;
    char carry = '0';

    if(a.length() != b.length()) {
        while (a.length()>b.length())
        {
            b = '0' + b;
        }
        
        while (a.length()<b.length())
        {
            a = '0' + a;
        }
    }
   
    int i = a.length()-1;
    int j = b.length()-1;

    while ( i >= 0  || j >= 0)
    {
        if(a[i] == '1' && b[j] == '1' && carry == '1') {
            carry = '1';
            c = '1' + c;
        }
        else if(a[i] == '1' && b[j] == '1') {
            carry = '1';
            c = '0' + c;
        }
        else if((a[i] == '1' || b[j] == '1') && carry == '1') {
            c = '0' + c;
            carry = '1';
        }
        else {
            if(a[i] == '1' || b[j] == '1')  {
                c = '1' + c;
            }
            else {
                c = carry + c;
                carry = '0';
            }
        }
        i--;
        j--;
    }
    if(carry == '1') c = carry + c;
    return c;
    }
};
*/