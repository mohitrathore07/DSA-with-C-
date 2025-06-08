
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