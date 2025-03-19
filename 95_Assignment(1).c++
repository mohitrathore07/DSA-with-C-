// 17/03/2025

/* 
// Q - 1
// last occurance of a number x
#include<iostream>
using namespace std;

int main () {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 6};
    int x = 4;

    int ans = -1;

    int lo = 0;
    int hi = (sizeof(arr) / sizeof(arr[0])) - 1 ;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x) {
            ans = mid;
            lo = mid + 1;
        }
        else if(arr[mid] > x){
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout<<ans;
    
    return 0;
}
*/

/* 
// Q - 2 no of 1's in a sorted array
#include<iostream>
using namespace std;

int main () {
    int arr[] = {};

    int n = sizeof(arr) / sizeof(arr[0]);
    int lo = 0;
    int hi = n - 1 ;
    int mid = -1;
    bool flag = false;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2; 
        if(arr[mid] == 1 && arr[mid - 1] == 0) {
            flag = true;
            break;
        }
        else if(arr[mid] == 0){
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if(flag) cout<<"no of 1's is: "<<n-mid;
    else cout<<0;
    return 0;
}
*/

// Q - 3 2d matrix max 1's row return
/* 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <vector<int>> v = {{0,1,1,1} ,{1,0,0,0},{0,0,1,1},{0,0,0,0}};

    int r = v.size();
    int ans = -1;
    int count = 0;
    for(int i = 0; i < r; i++) {
        int lo = 0;
        int hi = r-1;
        int mid = 0;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if(v[i][mid] == 1 && v[i][mid-1] == 0) {
                    break;
            }
            else if(v[i][mid] == 1 && v[i][mid] != 0) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        
        if(count < r - mid) {
            count = r-mid;
            ans = i;
          }
        
    }
    cout<<"row with maximum 1's is: "<<ans;
    return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> v = {1, 1, 2, 3, 4};

    int lo = 1;
    int n = v.size();
    int hi = n - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if( (v[mid] == v[mid-1]) || v[mid] == v[mid+1]) {
            ans = v[mid];
            break;
        }
        else if(v[mid] < mid ) {
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout<<ans;
    return 0;
}