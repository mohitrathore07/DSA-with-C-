/*
#include <iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   vector<int> num1 = {2,2,4,4};
   vector<int> num2 = {2,2,2,4,4};

   num1.insert(num1.end() , num2.begin() , num2.end());
   sort(num1.begin() , num1.end());
   int n = num1.size() + 1;
   if(num1.size() % 2 == 0) {
    cout<<(double)(num1[n-1] + num1[n-2])/2;
   }

   cout<<num1[n-1];
    return 0;
}*/


/* 
 copy 2 vectors when both are sorted 
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

    for (int i: nums3)
    {
        cout<<i<<" "; 
    }
    
    
   return 0;
}


*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {
   int x = 120;

   int ans = 0;
   bool flag  = true;
   if(x < 0) {
    flag = false;
    x *= -1;
   }
   while (x > 0)
   {
        int d = x % 10;
        ans = ans * 10 + d;
        x/=10;
   }
   
   if(flag) {
    cout<<ans;
   }
   else {
    cout<<ans* -1;
   }
   return 0; 
}
*/
/* 

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
    string str = "abcabcbb";
    printSubset("", str);  
    return 0;
}

*/

/* 
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a ,vector<int> &b, vector<int> &v) {
    int i = 0; 
    int j  = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if(a[i] >= b[j]) v[k++] = a[i++];
        else v[k++] =  b[j++];
    }
    if(i == a.size()) {
        while (j < b.size())
        {
            v[k++] =  b[j++];
        }
    }
    if(j == b.size()) {
        while (i < a.size())
        {
            v[k++] =  a[i++];
        }
    }
} 

void mergeSort(vector<int> & v) {
    int n = v.size();
    if(n == 1) return;

    int s1 = n/2 , s2 = n -  n/2;
    vector<int> a(s1) , b(s2);

    for (int i = 0; i < s1; i++)
        a[i] = v[i];
        
    for (int i = 0; i < s2; i++)
        b[i] = v[i+s1];

    mergeSort(a);
    mergeSort(b);

    merge(a, b , v);

    a.clear();
    b.clear();
}
int main() {
    vector<int> v = {5,444,444,74,24};

    mergeSort(v);

    for(int i: v) 
        cout<<i<<" ";
    return 0;
}

*/

/*
#include<iostream>
#include<string>
using namespace std;

int main () {
    string str= "abcde" , goal = "cdeab";
    
    char tp1 = str[0];
    char tp2 = str[1];

    int i = 1;
    int r = 1;
    while (r<=2)
    {
        if(i == str.size() - 2) {
            str[str.size() - 2 ] = tp1;
            str[str.size() - 1 ] = tp2;
            break;
        }
        str[i] = str[i+1];
        i++;
        r++;
        
    }
    // cout<<tp1<<" "<<tp2;
    return 0;
}

*/
/* 

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& a , vector<int>& b, vector<int>& arr) {
    int count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < a.size() && j < b.size())
    {
        if(a[i] > b[j]) count++;
        i++;
        j++;
    }
    return count;
}

int mergeSort(vector<int>& arr ) {
    int n = arr.size();
    if(n==1) return 0; 
    int s1 = n/2 , s2  = n-n/2;
    vector<int> a(s1) , b(s2);

    for (int i = 0; i < s1; i++)
    {
        a[i] = arr[i];
    }
    
    for (int i = 0; i < s2; i++)
    {
        b[i] = arr[i+s1];
    }
    int count = 0;
    mergeSort(a);
    mergeSort(b);

    merge(a,b,arr );

   return count;
}

int main () {

    vector<int> arr = {5,1,8,2,3};
    
    int count = mergeSort(arr);
    cout<<count<<" ";
}

*/

/*
// rotate string by k place
#include <iostream>
using namespace std;

int main () {
    string str = "abc";
    string ans = "";

    int k = 2;
    while (k > 0)
    {
        char s = str[0];
        int i = 0;
        while (i < str.length()-1)
        {
            str[i] = str[i+1];
            i++;
        }
        str.pop_back();
        str.push_back(s);
        k--;
    }
    
    cout<<str<<" ";
}

*/

/* 
#include <iostream>
using namespace std;

int main () {
    string str = "gcmbf";
    string str2 = "fgcmb";

    int k = 2;
    while (k > 0)
    {
        char s = str[0];
        int i = 0;
        while (i < str.length()-1)
        {
            str[i] = str[i+1];
            i++;
        }
        str.pop_back();
        str.push_back(s);
        k--;
    }
    
    cout<<str<<" ";
    */

/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> v = {7,12,11,8,9};
    int n = v.size();
    int i = 0;


    while (i < n )
    {
        if(v[i] <= 0)  {
            i++;
            continue;
        }
        int correctPos = v[i] - 1;
        if(correctPos == i) i++;
        else swap(v[i] , v[correctPos]);
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(v[0] == 0) v[0] += 1;
        if(i+1 != v[i]) {
            flag = false;
            cout<<"smallest missing is: "<<i+1;
            break;
        } 
    }
    if(flag) cout<<n;

   
    
    return 0;
}
    */

/*
#include <iostream>
#include <vector>
using namespace std;


int main () {
    string s = "abccccdd";
    vector<int> v(26,0);
    
    int i=0;
    while (s[i] != '\0')
    {
        char c = s[i];
        v[c - 'a'] = v[c- 'a'] + 1;    
    }
    
    string ans = "";

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] <= 1) continue;
        int mid = v[i]/2;
        while (mid > 0)
        {
            ans += (char)(i+97);
            mid--;
        }
        string add = "";
        while (v[i] > 0)
        {
            add += (char)(i+97);
            v[i] = v[i] - 1; 
        }
        ans += add;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == 0) continue;
        if(ans.length() % 2 == 0) {
            string part = ans.substr((ans.length()/2) - 1);
            ans += v[i];
            ans+=part;
        }
        else {
            string part = ans.substr((ans.length()/2));
            ans += v[i];
            ans+=part;
        } 
    }
    
    cout<<ans;
    return 0;
}
*/
// 4,3,2,7,8,2,3,1

/*
#include<iostream>
#include<vector>
using namespace std; 

int main() {
    vector<int> nums = {1,1,2};
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    while (i < nums.size())
    {
        int correctPos = nums[i] - 1;
        if(correctPos == i  || (nums[i] <= 0 && nums[i] >= n) || nums[i] == nums[correctPos]) i++;
        else swap(nums[correctPos] , nums[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != i+1) ans.push_back(nums[i]);
    }
    
    for(int i : ans) cout<<i<<" ";
    
    return 0;
}
*/
/* 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int maxLen = 0;
    int currLen = 1;  // Start with 1 to count the current element
    
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            currLen++;
        } else {
            maxLen = max(maxLen, currLen);
            currLen = 1;  // Reset count
        }
    }
    
    maxLen = max(maxLen, currLen);  // Check after loop ends
    
    cout << "Length of the longest strictly decreasing subarray: " << maxLen << endl;
    return 0;
}

*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    string num1 = "12", num2 = "46";
    string ans;
    int carry = 0;
    for (int i = 1; i >= 0; i--)
    {
        carry = 0;        
        int tempResult;
        for (int j = 1; j >= 0; j--)
        {
            int product = char(num1[i] - '0') * char(num2[j] - '0') + carry;
            tempResult = product % 10;
            carry = product / 10;       
        }   

        if(carry > 0) tempResult = carry * 10 + tempResult;


    }
    
    return 0;
}