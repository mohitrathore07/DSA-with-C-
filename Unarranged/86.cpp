/*                                                               10/02/2025                                                                      */
/* 
// subsequence print 
#include <iostream>
#include <vector>
using namespace std;

void printSubsequnce(int arr[], int n , int idx , vector <int> ans , int k) {
    if (idx == n) {
        if(ans.size()==k) {
            for(int i = 0; i < ans.size(); i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size() + (n-idx) < k) return;
    printSubsequnce(arr, n , idx+1,ans, k);
    ans.push_back(arr[idx]);
    printSubsequnce(arr, n , idx+1,ans, k);
}

int main () {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    int k = 3;
    printSubsequnce(arr, n , 0, v , k);
    return 0;
}
    
*/

/* 
// permutations question

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void printingpermutations(string str, string ans  ) {
    if(str == "") {
        cout<<ans<<endl;
        return;
    }
    for(int i = 0; i < str.length(); i++) {
    char ch = str[i];
    string left = str.substr(0 , i);
    string right = str.substr(i+1);
    printingpermutations(left+right , ans+ch);
    }
}

int main () {
    string s = "abc";
    string ans = "";

    printingpermutations(s,ans);
    return 0;
}
    */

/* subarray using loops  
#include<iostream>
using namespace std;

int main () {
    int arr[] = {1 , 2 , 3 , 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            for(int k = i; k <= j; k++) {
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
    return 0;
}
*/


/* subarray using  recursion  - dry run copy

#include<iostream>
#include<vector>
using namespace std;

void printsubarrays(int arr[] , vector <int> v , int idx , int n) {
    if(idx == n) {
        for(int i = 0; i < v.size(); i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printsubarrays(arr, v , idx+1, n);
    if(v.size()==0 || arr[idx-1] == v[v.size()-1]) {
       v.push_back(arr[idx]);
       printsubarrays(arr, v , idx+1, n);
    }
} 

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int>v;
    printsubarrays(arr , v , 0 , n);
    return 0;
}
    */