/*
 // leetcode 136 biwise XOR se solve kra 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val:nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};
*/

/*

// last occurance
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1,2,3,2,1,3,1};
    int x = 1;
    for(int i = vec.size() - 1; i >= 0; i--) {
        if(vec[i] == x) {
            cout<<"last occurance is: "<<i;
            break;
        }
    }
    return 0;
}
*/

/* 
// vector sorted or not
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    
    bool flag = true;
    for (int i = 0; i < size-1; i++)
    {
        if(vec[i] > vec[i+1]) {
            flag = false;
            cout<<"vector is not sorted";
            break;
        }
    }
    if(flag) {
            cout<<"vector is  sorted";
        }
        
        return 0;
    }
*/

/*

// pair = sum
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {3,1,2,4,0,6};
    
    int targetSum = 5;
    int size = 6;
    
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1 ; j < size; j++) {
            if(vec[i] + vec[j] == targetSum) cout<<"pair is: ( "<<vec[i]<<", "<<vec[j]<<" )"<<endl;
        }
    }
    
    return 0;
}
*/


/*
// triplet = sum
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {3,1,2,4,0,6};
    
    int targetSum = 5;
    int size = 6;
    
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1 ; j < size; j++) {
            for(int k = j + 1; k < size; k++) {
                if(vec[i] + vec[j] + vec[k] == targetSum) cout<<"pair is: ( "<<vec[i]<<", "<<vec[j]<<" ,"<<vec[k]<<" )"<<endl;
            }
        }
    }
    
    return 0;
}
*/

/*
// second largest
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector <int> vec = {3,1,6,4,0,5};
    
   int fmax = INT_MIN, secmax =  INT_MIN;


   for (int val: vec)
   {
     if(val > fmax) {
        secmax = fmax;
        fmax = val;
     }
     else if(val > secmax && val != fmax) {
        secmax = val;
     }
   }
   cout<<fmax<<" "<<secmax;
    return 0;
}
*/

/* 
/// decimal to binary
#include <iostream>
using namespace std;

int main() {
    int ans = 0 , pow = 1;
    int decNum = 42;
    
    while (decNum > 0) 
    {
        int remainder = decNum % 2;
        decNum  /= 2;
        ans += (remainder * pow); 
        pow *= 10;
    }
    cout<<ans;
    return 0;
}
*/

/*

// binary to decimal
#include <iostream>
using namespace std;

int main() {
    int ans = 0 , pow = 1;
    int Num = 101010;
    
    while (Num > 0) 
    {
        int remainder = Num % 10;
        ans += (remainder  * pow); 
        pow *= 2;
        Num /= 10;
    }
    cout<<ans;
    return 0;
}
    */