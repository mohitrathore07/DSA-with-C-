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

