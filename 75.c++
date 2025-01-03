/*                                                              03-01-2025                                                             */

// given a string print the character that is occuring most no of times 

/* 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main () {
    string s = "physicswallah";
    int max = 0;

    for(int i = 0; i < s.length(); i++) {
        int count = 1;
        for(int j = i+1; j < s.length(); j++) {
            if(s[j] == s[i]) count++;
        }
        if(max < count ) max = count;
    }

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int count = 1;
        for(int j = i+1; j < s.length(); j++) {
            if(s[j] == s[i]) count++;
        }
        if(count == max ) cout<<ch<<" "<<max<<endl;
    }

    return 0;
}
*/ 

/* 
// efficient way to solve

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main () {
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++; // us index pe 1 se increase
    }
    int mx = 0;
    for(int i = 0; i < 26;i++) {
        if(arr[i]>mx) mx = arr[i];
    }

    for(int i = 0; i < 26; i++){
        if(arr[i]==mx) {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    return 0;
}
*/


// stringstream
/* 
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int main () {
    string str = "raghav is a maths teacher";
    stringstream sss(str);

    string temp;

    while(sss>>temp) { // we are taking input in temp from sss stream
        cout<<temp<<endl;
    }
    return 0;
}
*/

/* 
// count no of words that is occuring the most
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string str = "raghav garg is a maths a teacher as well as a DSA mentor";
    stringstream ss(str);
    string temp;

    vector<string> v;

    while(ss>>temp) {
        v.push_back(temp);
    }

    sort(v.begin() , v.end());

    int maxCount = 1;
    int count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount , count);
    }

    for(int i = 1; i < v.size(); i++) {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count == maxCount) cout<<v[i]<<" "<<count <<endl;
    }

    return 0;
}
*/

/* 
// stoi vs stoll built in functions
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main () {
    string str = "123456";

    int x = stoi(str); // converts string to integer

    cout<<x;

    // stoll - long long me convert
    string s = "1234567891234";

    long long y = stoll(str); // bcz this is a large number which if out of capacity of int
    cout<<y;
    return 0;
}
*/

/* 
// given a string consisting of digits from 0 to 9 return the index of string which has max value
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
    string str = "0123 0023 456 00182 940 2901";

    stringstream ss(str);
    string temp;
    vector<int> v;
    while(ss>>temp) {
        int x = stoi(temp);
        v.push_back(x);
    }
    int max = INT8_MAX;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > max) max = i;
    }
    cout<<"max at: "<<max;
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