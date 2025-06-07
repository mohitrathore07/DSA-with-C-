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
