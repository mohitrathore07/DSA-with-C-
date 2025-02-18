/*                                                               18/02/2025                                                                      */


/* 
// Q - 1 write a recursive function to reverse a number . Avoiding preceding 0s in the reversed number
#include<iostream>
using namespace std;

int reversenum(int num , int ans) {
    if(num==0) return ans;
    int remainder = num%10;
    if(ans==0 && remainder == 0) return reversenum(num/10, ans);
    else return reversenum(num/10, ans*10+remainder);
}

int main () {
    int num = 100;
    cout<<num<<" ------>"<<reversenum(num , 0);
    return 0;
}
  
*/


/* Q - 2 
#include<iostream>
#include<vector>
using namespace std;

void printingnum(int arr[], int k , vector<int> ans, int idx, int size) {
    if(idx == size ) {
        if(ans.size() == k) {
            for(int i = 0; i < ans.size(); i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size() + (size-idx) < k) return;

    printingnum(arr, k , ans, idx+1, size); 
    ans.push_back(arr[idx]);
    printingnum(arr, k , ans, idx+1, size);
}

int main () {
    int arr[] = {1,2,3,4,5};
    int k = 3;
    vector<int> v;
    printingnum(arr,k,v ,0 , 5);
    return 0;
}

*/