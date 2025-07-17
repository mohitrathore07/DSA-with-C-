// Longest Consecutive Subsequence

/*

#include <iostream>
using namespace std;

bool exists(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return true;
    }
    return false;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int longest = 0;
    
    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        int len = 1;
        
        while(exists(arr, n, curr + 1)) {
            curr++;
            len++;
        }
        
        longest = max(longest, len);
    }
    
    cout << "Longest Consecutive Subsequence Length = " << longest;
}

*/
/*

//  method - 2 better then above

#include <iostream>
#include <climits>
using namespace std;


int main() {
    int arr[] = {10,9,2,5,3,7,101,18};
    
    int longest = 1;
    int n = 8;
    int lastsmaller = INT_MIN;
    
    int cnt = 1;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] - 1 == lastsmaller) {
            cnt += 1;
            lastsmaller = arr[i];
        }
        
        else if(lastsmaller != arr[i]) {
            cnt = 1;
            lastsmaller = arr[i];
        }
        longest = max(longest , cnt);
    }
    cout<<"longest is: "<<longest;
    return 0;
}
*/

   int n = prices.size();
            int ans = 0;
            int min = INT_MAX;
            for(int i = 0; i < n; i++) {
                if(prices[i] < min) min = prices[i];
                ans = max(ans, prices[i]-min);
            }        
            return ans;