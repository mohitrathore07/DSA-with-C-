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
*  796
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

