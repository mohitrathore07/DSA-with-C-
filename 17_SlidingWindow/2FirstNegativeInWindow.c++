
/*
// 1st negative number in every window of size k 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int k = 4;
    int n = 9;
    int arr1[n-k+1];
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j <= k+i; j++) {
            if(arr[j] < 0) 
            {
                arr1[id++] =  arr[j];
                break;
            }
        }
    }
    for (int val: arr1)
    {
        cout<<val<<" ";
    }
    
    return 0;
}
*/

// sliding window

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,3,4,4,-7,-1,4,-2,6};
    int k = 2;
    int n = 9;
    int arr1[n-k+1];
    int p = -1;
    for (int i = 0; i < k; i++)
    {
        if(arr[i] < 0) {
            p = i;
            break;
        }
    }
    if(p == -1) arr1[0] = 1;  // denoting that no negative number for a particular window
    else arr1[0] = arr[p];

    int i = 1;
    int j = k;

    while (j < n)
    {
        if(p >= i) arr1[i] = arr[p];
        else {
                p = -1;
                for (int x = i; x <= j; x++)
                {
                    if(arr[x] < 0) {
                        p = x;
                        break;
                    }
                }
                if(p != -1) arr1[i] = arr[p];
                else arr1[i] = 1; // denoting that no negative number for a particular window                
            }
        i++;
        j++;
    }
    
    for (int val: arr1)
    {
        cout<<val<<" ";
    }
    
    return 0;
}