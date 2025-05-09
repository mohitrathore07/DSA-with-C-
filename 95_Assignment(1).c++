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

/* Q - 5 Perfect Square  or not 

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 45;

    int lo = 0;
    int hi = n;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if( (mid*mid)==n) {
            flag = true;
            break;
        }
        else if ((mid*mid)>n) {
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    if(flag) {
        cout<<"perfect square";
    } else {
        cout<<"not a perfect square";
    }
    return 0;
}
*/

// Q - 6

/*

*/

#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<vector<int>> v = {{1 , 3 , 5 ,7} , {10 , 11 , 16 , 20} , {23,30,34,60}}; 
    int x = 3;
    int n =  v.size()-1;
    int lo = 0;
    int hi = n;

    bool flag = false;

    for(int i = 0; i <= n;i++) {
        lo = 0;
        hi = n;

        while (lo<=hi)
        {
            int mid = lo + (hi - lo) / 2;
            if(v[i][mid] == x) {
                flag = true;
                break;
            }
            else if(v[i][mid] > x){
                hi = mid-1;
            }
            else {
                lo = hi + 1;
            }
         }   
    }
    if(flag) cout<<"present";
    else cout<<"absent";
    return 0;
}