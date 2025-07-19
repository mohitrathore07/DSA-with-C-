/*
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    
    // int fmax = INT_MIN;
    // int smax = INT_MIN;
    // for(int i :arr) {
        //     if(fmax < i) fmax = i;
        //     if(smax < i && (fmax != i)) smax = fmax; 
        // }
        // cout<<"fmax "<<fmax<<" "<<smax;
        
        // creating a problem on above
        
        // int arr[] = {10, 40, 30, 20};  // is test case me else if bhi chalega - Ye condition tab chalegi jab current element i:

fmax se chhota ho (kyunki else if hai, to i > fmax wala block already skip ho chuka hoga), but

smax se bada ho, aur

fmax ke equal na ho



        int fmax = INT_MIN;
        int smax = INT_MIN;
        for(int i :arr) {
            if(fmax < i){
                smax = fmax;
                fmax = i;    
            } 
            else if(i > smax && i != fmax) {
                smax = i;
            }
        }
        cout<<"fmax "<<fmax<<" "<<smax;
        return 0;
    }
    
    
*/

/*

in place array ko rotate

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int i = 0, j = 5;
    
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    
    for(int i: arr) cout<<i<<" ";
    return 0;
}
*/

/*

left rotate by 1 position

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int elem = arr[0];
    
    for (int i = 1 ; i < 6; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[5] = elem;
    for(int i: arr) cout<<i<<" ";
    return 0;
}
*/


/*

right rotation by 1

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int elem = arr[5];
    
    for (int i = 4 ; i >= 0; i--)
    {
        arr[i+1] = arr[i] ;
    }
    arr[0] = elem;
    for(int i: arr) cout<<i<<" ";
    return 0;
}
*/

/*
left rotate by k position

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    while (k > 0)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        k--;
    }
    
    
    for(int i: arr) cout<<i<<" ";
    return 0;
}
*/

/*

right rotation

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    while (k > 0)
    {
        int temp = arr[n-1];
        for (int i = n-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        k--;
    }
    
    
    for(int i: arr) cout<<i<<" ";
    return 0;
}
*/

/*

inserting an element at a specified index - condition fixed size array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6};
    
    int size = 6; // initial number of elements
    
    int index = 2; // where to insert
    int element = 44;
    
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[index] = element;
    size++;
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/


/*
vector insertion element


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5, 4}; // initial vector

    int index = 2;
    int element = 44;

    // Insert 44 at index 2
    arr.insert(arr.begin() + index, element);

    // Print updated vector
    cout << "Vector after inserting 44 at index 2: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}

*/


/*

deleting an element from a specified index - condition fixed size array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 44, 5}; // array of size 10
    int size = 5;                   // current number of elements

    int indexToDelete = 3; // delete the element at index 3 (value = 44)

    // Shift elements left from indexToDelete
    for (int i = indexToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // decrease size since one element is removed

    // Print updated array
    cout << "Array after deleting element at index " << indexToDelete << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;
    for (int i = 1; i < n-1; i++)
    {
         if(arr[i] == arr[i-1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp; 
         }  
    }
    
    return 0;
}
*/

// Remove Duplicates (Sorted Array) - works with unsorted as well

/*

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,3,1,5,5,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i = 0 , j = 1;
    
    while (j < n)
    {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    
    for (int a = 0; a <= i; a++)
    {
        cout<<arr[a]<<" ";
    }
    
    return 0;
}
*/

/*
two sum leetcode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i]+nums[j] == target)
                {    
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }   
        }   
        return {};
    }
};
*/

/*

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 4, 5, 7};
    int arr2[] = {5, 6, 3, 4, 8};
    int x = 9;
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {  
            if ((arr1[i] + arr2[j]) == x) {
                cout << "(" << arr1[i] << ", " << arr2[j] << ")" << endl;
            }
        }   
    }
    
    return 0;
}
*/


/*
kadane's algorithum

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
       int curr = 0 , maxSum = INT_MIN;

       for(int i: arr) {
            curr += i;
            maxSum = max(curr, maxSum);
            if(curr < 0) curr = 0;
       }
       return maxSum;
    }
};

*/

/*

// missing number - math method
#include <iostream>
using namespace std;

int main() {
    int arr[]  = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int totalSum = n * (n+1) / 2;
    
    int arraySum = 0;
    for(int i: arr) {
        arraySum += i;
    }
    
    cout<<"Missing is: "<<totalSum  - arraySum;
    return 0;
}

*/

/*
// Sort an Array of 0s, 1s, and 2s (Dutch National Flag Problem)
#include <iostream>
#include <vector>
using namespace std;

void diplay(int arr[] , int n) {
    for(int i = 0; i <= n- 1; i++ ) {
        cout<<arr[i]<<" ";
    }
}

int main () {
    int arr[] = {1, 0 , 2 , 2 , 0 , 1 , 0 };
    int  n = 7;
    int lo = 0 , hi = n-1, mid = 0;
    
    while (mid <= hi)
    {
        if(arr[mid] == 0) {
            swap(arr[lo] , arr[mid]);
            lo++;
            mid++;
        }
        else if(arr[mid] == 2) {
            swap(arr[hi] , arr[mid]);
            hi--;
        }
        
        else {
            mid++;
        }
    }
    
    diplay(arr , n);
    return 0;
}
*/

// subarray
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {4,5,0,-2,-3,1};
    int n = nums.size();
    

    for(int st = 0 ; st < n; st++) {
        for(int end = st; end < n; end++) {
            int sum = 0;
            for(int i = st; i <= end; i++) {
                cout<<nums[i]<<",";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


//  #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> nums = {2,3,1,2,4,3};
//     int n = nums.size();
//     int target = 7;
//     int prefix[n + 1];
//     prefix[0] = 0;

//     for (int i = 0; i < n; i++) {
//         prefix[i + 1] = prefix[i] + nums[i];
//     }

    
//     for(int i  = 0; i < n; i++) {
//         for(int j = i+1; j < n; j++) {
//             int sum = prefix[j] - prefix[i];
//             if(sum>=target) cout<<"pair is: "<<prefix[j]<<" , " <<prefix[i]<<endl;
//         }    
//         }
    
//     return 0;
// }


// pair sum - better then bruit force method
/*

#include <iostream>
using namespace std;

pair<int, int> pairSum(int arr[], int n, int target){
    int i = 0 , j = n-1;
    
    while (i<j)
    {
        int sum = arr[i] + arr[j];
        if(sum>target) {
            j--;
            
        } 
        else if(sum<target) {
            i++;
            
        } 
        else {
            return {i , j};
        }
    }
    
    return {-1 , -1};
}

int main() {
    
int arr[] = {1, 2, 3, 4, 5, 6, 7 };
int target = 13;
int n = sizeof(arr) / sizeof(arr[0]);
pair<int, int> res = pairSum(arr , n , target);
if (res.first != -1)
cout << "Pair: " << res.first << ", " << res.second << endl;

else
cout << "No pair found\n";

return 0;
}
*/

