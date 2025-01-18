/*                                                                                 18/01/2024                                                                                         */

/* 
#include <iostream>
#include <vector>
using namespace std;


void printingelement(int arr[],int n ,int idx) {
    if(idx == n) return;
    cout<<arr[idx]<<" ";
    return printingelement(arr, n , idx+1);
}


void printingelementvector(vector<int>& v , int idx){
    if(idx == v.size()) return;
    cout<<v[idx]<<" ";
    return printingelementvector(v , idx+1);
}
int main() {
    int arr[] = {2,1,6,3,9,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printingelement(arr, n , 0);
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) {
        cin>>v[i];
    }
    printingelementvector(v ,  0);

    return 0;
}
*/

/* 
// max value print
#include <iostream>
#include <vector>
using namespace std;

int printingelement(int arr[],int n ,int idx , int max) {
    if(idx == n) return max;
    if(max < arr[idx]) max = arr[idx];
    return printingelement(arr, n , idx+1 , max);
}


// void printingelementvector(vector<int>& v , int idx){
//     if(idx == v.size()) return;
//     cout<<v[idx]<<" ";
//     printingelementvector(v , idx+1);
// }

int main() {
    int arr[] = {2,1,6,3,9,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<printingelement(arr, n , 0,arr[0]);
    // vector<int> v(n);
    // for(int i = 0 ; i < n ; i++) {
        // cin>>v[i];
    // }
    // printingelementvector(v ,  0);

    return 0;
}
*/

/* 
// #optimised way to find max in array - dry run copy
#include <iostream>
#include <vector>
using namespace std;

int printingelement(int arr[],int n ,int idx ) {
    if(idx == n) return INT8_MIN;
    return max(arr[idx] , printingelement(arr, n , idx+1 ));
}

int main() {
    int arr[] = {2,1,6,3,9,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<printingelement(arr, n , 0);
 
    return 0;
}
*/

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
