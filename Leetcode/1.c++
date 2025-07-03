
/* 

4. Median of Two Sorted Arrays


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    int m = nums1.size();
    int n = nums2.size();
    vector<int> nums3(m+n);

    int i=0 , j=0, k=0;
    while (i < m && j < n)
    {
        if(nums1[i] < nums2[j]){
            nums3[k] = nums1[i];
            i++;
        }
        else {
            nums3[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        nums3[k] = nums1[i];
        i++;
        k++; 
    }

    while (j < n)
    {
        nums3[k] = nums2[j];
        j++;
        k++; 
    }

    if((m+n) % 2 != 0) {
        cout<<nums3[(m+n)/2];
    }
    else {
        int x = (m+n) / 2;
        double a= nums3[x];
        double b= nums3[x-1];
        cout<<(a+b)/2;
    }
   return 0; 
}
*/

/* 
leetcode 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        string s = "";

        for(int i = 0; i < min(first.size(),last.size());i++) {
            if(first[i]==last[i]) {
                s += first[i];
            }
            else {
                return s;
            }
        }
        return s;
    }
};
*/




/*  // isomorphic strings 
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v(150, 1000);
        for(int i = 0; i < s.length();i++) {
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx] = s[i] - t[i];
            else if(v[idx]!=s[i]-t[i]) return false;
        }
 // double se loop bcz t ke perspective se bhi check karna hoga 
        for(int i = 0 ; i < 150; i++) {
            v[i] = 1000;
        }

        for(int i = 0; i < t.length();i++) {
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i] - s[i];
            else if(v[idx]!=t[i]-s[i]) return false;
        }
        
        return true;
    }
};

*/

/* 
// leetcode 78

#include<iostream>
#include<string>
using namespace std;

void printSubset(string ans, string Original) {
    if(Original == "") {  
        cout << ans << endl;
        return;
    }
    
    char ch = Original[0]; 
    printSubset(ans + ch, Original.substr(1));  
    printSubset(ans, Original.substr(1));  
}

int main() {
    string str = "abc";
    printSubset("", str);  
    return 0;
}

*/

/* 1108
#include<iostream>
#include<string>
using namespace std;

int main () {
    string str = "1.1.1.1";
    string ans = "";
    int i = 0;
    while(str[i] != '\0' ) {
        if(str[i] == '.') {
            ans += "[.]";
            i++;
            continue;
        }
        else ans+=str[i];
        i++;
    }

    cout<<ans;
    return 0;
}
*/

/*  796
class Solution {
public:
    bool rotateString(string s, string goal) {
    if(s.length() != goal.length()) return false;

    int k = s.length();
    while (k > 0)
    {
        char c = s[0];
        int i = 0;
        while (i < s.length()-1)
        {
            s[i] = s[i+1];
            i++;
        }
        s.pop_back();
        s.push_back(c);
        if(s == goal) return true;
        k--;
    }

    return false;
    }
};
*/

/*
//1832. Check if the Sentence Is Pangram
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string  str = "leetcode";
    
    if(str.length() < 26) {
        cout << "not a pangram";
        return 0;
    };
    
    vector<int> a(26,0);
    int i = 0;
    
    for(char c: str)
    {
        if(c >= 'a' && c <= 'z' ) {
            a[c - 'a'] = 1;
        }
    }
    
    for (int i : a) {
        if (i == 0) {
            cout << "not a pangram";
            return 0;
        }
    }
    
    cout << "pangram";
    return 0;
}
*/


/*
// 268 leetcode
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int expectedSum = n * (n + 1) / 2;
    int actual = 0;
    int i = 0;
    while (i<n)
    {
        actual  += arr[i];
        i++;
    }
    cout<<"Missing num is: "<< expectedSum - actual;
    return 0;
} 
*/

/* 
// another method of leetcode 268 extra space
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {3,0,1};
    int n = nums.size();
    vector<bool> check(n+1 , false);
    
    for (int i = 0; i < n; i++)
    {
        int ele = nums[i];
        check[ele] = true;
    }
    \
    
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(check[i] == false) {
            cout<<"missing is: "<<i;
            flag = false;
            break; 
        }
    }
    if(flag == true) cout<<"all set";
    return 0;
}
*/

/*
// 268 using cyclic sort - O(n) hi hogi T.C.

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {3,0,1};
    int n = v.size();
    int i  = 0;
   while (i < n)
   {
     int correctIdx = v[i];
     if(correctIdx == i || v[i] == n) i++;
     else swap(v[i] , v[correctIdx]);
   }
   bool flag = false;
   for(int i = 0 ; i < n ; i++) {
    if(v[i] != i) {
        cout<<"missing is: "<<i;
        flag = true;
        break;
    }
   }
   if(flag == false) {
    cout<<n;
   } 

 
   
   return 0;
}
*/

/*
// leetcode 287
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n) {
            int correctIdx = nums[i] - 1;
            if(correctIdx == i) i++; 
            if (nums[correctIdx] == nums[i]) return nums[i];
            else swap(nums[correctIdx] , nums[i]);
        }
        return -1;
    }
};
*/

/*
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        int i = 0;
        while(i < n) {
            int correctIdx = nums[i] - 1;
            if((correctIdx == i) || (nums[correctIdx] == nums[i])) {
                i++;
            }
            else swap(nums[i], nums[correctIdx]);
        }

        for(int i = 0; i < n; i++) {
            if(i != (nums[i]-1)) ans.push_back(i+1);
        }
        return ans;
    }
};

*/
/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int>v(26,0);
    string order ="hucw";
    string s =  "utzoampdgkalexslxoqfkdjoczajxtuhqyxvlfatmptqdsochtdzgypsfkgqwbgqbcamdqnqztaqhqanirikahtmalzqjjxtqfnh";
    for(int i = 0; i < s.length() ; i++) {
        char c = s[i];
        int idx =  c - 'a';
        v[idx] = v[idx]+1;
    }
    int i = 0;
    string ans = "";
    while (order[i] != '\0') {
        char c = order[i];
        int idx =  c - 'a';
        int l = v[idx];
        while(l > 0) {
            ans+=c;
            l--;
        }
        v[idx] = -1;
        i++;
    }
    for(int i: v) cout<<i<<" ";
    cout<<endl;

    for(int i = 0; i < v.size(); i++) {
        int j = v[i];
        char c =  (char)(i + 'a');
        while(j > 0) {
             ans += c;
             j--;
        }
    }
    cout<<ans;
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

/*
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v = {1,7,3,6,5,6};
    
    for (int i = 1; i <v.size(); i++)
    {
        v[i] = v[i] + v[i-1];
    }
    // int idx = -1;
    // for (int i = 0; i < v.size(); i++)
    // {
        //     if((2*v[i]) == v[v.size()-1]) {
            //         idx = i;
            //         break;
            //     }
            // }
            // if(idx != -1) cout<<"yes it can be partitioned: "<< idx;
            // else cout<<"no it can be partitioned ";
            
            for(int i: v) {
                cout<<i<<" ";
            }
            return 0;
        }
*/
/* leetcode 724 
class Solution {
    public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i : nums) totalSum +=i;
        for(int i = 0; i < n; i++) {
            int leftSum = 0 , rightSum = 0;
            for(int j = 0; j < i; j++) leftSum += nums[j];
            rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum) return i;
        } 
        return -1;
    }
};
*/


// #include <iostream>
// using namespace std;

// int main() {
//     string n1 = "1100";
//     string n2 = "0110";
    

//     char carry = '0';
//     if(n1.length() > n2.length()) swap(n2 , n1);
//     int i = n1.length()-1;
//     int j = n2.length()-1;

//     while (j >= 0)
//     {
//        if(i < 0)  {
//             if(n2[j] == '1' && carry == '1') {
//                 n2[j] = '0';
//                 carry = '1';
//             }

//        }
//        else if(n1[i] == '1' && n2[j] == '1' && carry == '1') {
//             carry = '1';
//             n2[j] = '1';
//         } 
//         else if(n1[i] == '1' && n2[j] == '1') {
//             carry = '1';
//             n2[j] = '0';
//         } 
//         else {
//             if(carry == '1' &&  (n2[j] == '1' || n1[i] == '1')) {
//                 carry = '1';
//                 n2[j] = '0';
//             }
//             else if( n2[j] == '1' || n1[i] == '1') {
//                 n2[j] = '1';
//                 carry = '0';
//             }
//         }
//     i--;
//     j--;
//     }
    
//     if(carry == '1') n2 = '1' + n2;
//     cout<<"l is "<<n2;
//     return 0;
// }


/*
leetcode 67 add binary
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

/*

/// leetcode 415

class Solution {
public:
    string addStrings(string num1, string num2) {
    while(num1.length() < num2.length()) num1 = '0' + num1;
    while(num2.length() < num1.length()) num2 = '0' + num2;
    int n = num1.length();
    int carry = 0;
    string ans;

    for(int i = n-1; i >= 0; i--) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        int temp = sum % 10;
        ans = char(temp + '0') + ans;
        carry = sum / 10;
    }
    if(carry > 0) ans = char(carry + '0') + ans;
    return ans;
    }
};
*/


/*

43. Multiply Strings


class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0);

        // Multiply from end of each string
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Convert vector to string
        string ans = "";
        for (int num : result) {
            if (!(ans.empty() && num == 0)) {
                ans += to_string(num);
            }
        }

        return ans.empty() ? "0" : ans;
    }
};



*/

/*
gas station optimized

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;

        int start = 0, currGas = 0;

        for(int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            currGas += (gas[i] - cost[i]);

            if(currGas < 0) {
                start = i+1;
                currGas = 0;
            }
        } 

        return totalGas < totalCost ? -1 : start;

    }
};
*/