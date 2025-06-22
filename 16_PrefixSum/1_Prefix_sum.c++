
// prefix sum - cpy concept 22/june/2025

// leetcode 1480
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,10,1};
//     int n = 5;
//     vector <int> v(n);
//     int sum = arr[0];
//     v[0] = sum;
//     for (int i = 1; i < n; i++)
//     {
//         sum += arr[i];
//         v[i] = sum;
//     }
    
//     for (int i: v) 
//     {
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

/* 
// above effiecient way 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v = {3,1,2,10,1};
    int  n = v.size();
    
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i] + v[i-1];
    }
    
    for (int i: v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
*/

// array partition  into 2 contiguous array of equal sum

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v = {1,2,3,4,5,10,5};

    for (int i = 1; i <v.size(); i++)
    {
        v[i] = v[i] + v[i-1];
    }
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if((2*v[i]) == v[v.size()-1]) {
            idx = i;
            break;
        }
    }
    if(idx != -1) cout<<"yes it can be partitioned: "<< idx;
    else cout<<"no it can be partitioned ";

    return 0;
}