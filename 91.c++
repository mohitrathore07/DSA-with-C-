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

#include<iostream>
using namespace std;

int main () {
    int sqrt = 8;
    int low = 0;
    int high = 8;
    int ans = 0;
    bool flag = true;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if(mid*mid == sqrt) {
            flag = false;
            cout<<mid;
            break;
        }
       
        else if((mid*mid) > sqrt) high = mid - 1;
        else low = mid + 1;
       
    }
    if(flag == true) cout<<ans;
    return 0;
}