/*                                                                 22/10/2024                                                                   */


// find the next permutations of array Note : if not possible then print the sorter order ascending order

/* 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutations(vector <int>& num) {
    int n = num.size();
    int idx = -1;
    // find pivot element
    for(int i = n-2; i >= 0; i--) {
        if(num[i] < num[i+1] ) {
            idx = i;
            break;
        }
    }
    // if pivot not so reverse the whole vector/array
    if(idx == -1) {
        reverse(num.begin() , num.end());
        return;
    }
    // if pivot availible so after that all elements ko sort
    reverse(num.begin()+idx+1 , num.end());

    // then pivot and uske baad wale ko swap
    int temp = num[idx];
    num[idx] = num[idx+1];
    num[idx+1] = temp;

  
}

int main () {
    vector <int> num;

    num.push_back(5);
    num.push_back(1);
    num.push_back(2);
    num.push_back(7);

    nextPermutations(num);

    for(int i = 0; i < num.size(); i++) {
        cout<<num[i]<<" ";
    }
   
    return 0;
}


*/

// fails - 2 3 1 input pe


// so solution 
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutations(vector <int>& num) {
    int n = num.size();
    int idx = -1;

    // find pivot element
    for(int i = n-2; i >= 0; i--) {
        if(num[i] < num[i+1] ) {
            idx = i;
            break;
        }
    }

    // if pivot not so reverse the whole vector/array
    if(idx == -1) {
        reverse(num.begin() , num.end());
        return;
    }

    // if pivot availible so after that all elements ko sort
    reverse(num.begin()+idx+1 , num.end());

    // finding just greater element
    int j = idx + 1;
    while (j < n && num[j] <= num[idx]) {
        j++;
    }

    // then pivot and uske baad wale ko swap
    int temp = num[idx];
    num[idx] = num[j];
    num[j] = temp;

  
}

int main () {
    vector <int> num;
    num.push_back(5);
    num.push_back(1);
    num.push_back(2);
    num.push_back(7);

    nextPermutations(num);

    for(int i = 0; i < num.size(); i++) {
        cout<<num[i]<<" ";
    }
   
    return 0;
}
*/

// 24/10/2024

// traping rain - 42 leet code

#include <iostream>
#include <vector>
using namespace std;

int trap(vector <int>& height) {
    int n = height.size();
    // s1 prev greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0]; 
    for(int i = 1; i < n ; i++) {
        prev[i] = max;
        if(max < height[i] ) {
            max = height[i];
        }
    }
    // s2 next greates ele

    int next[n];
    next[n-1] = -1;
    max = height[n-1]; 
    for(int i = n-2; i > 0 ; i--) {
        next[i] = max;
        if(max < height[i] ) {
            max = height[i];
        }
    }
    // minimum array
    int mini[n];
    for(int i = n-2; i > 0 ; i--) {
        mini[i] = min(prev[i] , next[i]);
    }

    // calculating water

    int water = 0;
    for(int i = n-2; i > 0 ; i--) {
        if(height[i] < mini[i]) {
            water += (mini[i] - height[i]);
        }
    }
    return water;
}

int main ( ) {
    vector <int> height;
    
    return 0;
}