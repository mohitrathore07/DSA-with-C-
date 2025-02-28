// 27/02/2025



// find the smallest missing number  - linear method o(n) time complexity 
/*
#include<iostream>
using namespace std;

int main () {
    int arr[] = {0,1,2,3,4,8,9,12};
    int n = 8;

    for(int i = 0; i < n; i++) {
        if(arr[i] != i) {
            cout<<"missing is: "<<i;
            break;
        }
    }
    return 0;
}
*/

/* 
// find the smallest missing number  - binary method o(logn) time complexity 
#include<iostream>
using namespace std;

int main () {
    int arr[] = {0,1,2,3,4,6,8,9,12};
    int n = 8;
    int low =  0; 
    int high = n - 1;
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] ==  mid) {
            low = mid+1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;
    
    return 0;
}
*/


/* sqrt using binary 
#include<iostream>
using namespace std;

int main () {
    int sqrt = 11;
    int low = 0;
    int high = 8;
    // int ans = 0;
    bool flag = true;
    int mid = 0;
    while (low <= high) 
    {
        mid = low + (high - low) / 2;
        if(mid*mid == sqrt) {
            flag = false;
            cout<<mid;
            break;
        }
        else if((mid*mid) > sqrt) high = mid - 1;
        else low = mid + 1;
        
    }
    if(flag == true)  {
       cout<<high;
    }
    return 0;
}
*/

/*  leetcode - 852  - own
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,4,3,2,1,0};
    int lo = 1;
    int hi = 2;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo ) / 2;
        if(arr[mid] > arr[ans]) ans = mid;
        if(arr[mid-1] > arr[mid]) {
            hi = mid - 1;
        }
        else lo = mid+1;
    }
    cout<<ans;
    return 0;
}
*/
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,4,3,2,1,0};
    int lo = 1;
    int hi = 2;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo ) / 2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ) {
            cout<<mid;
            break;
        }
        if(arr[mid-1] > arr[mid]) {
            hi = mid - 1;
        }
        else lo = mid+1;
    }
    if(flag == false) cout<<0;
    return 0;
}