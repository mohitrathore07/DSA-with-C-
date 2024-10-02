/*                                                             02/10/2024                                                                        */

// reversing the vector
/* 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);

    reverse(v.begin() , v.end());
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
*/

// M - 2 from a specified index 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reversePart( int k , vector <int>& v , int size ) {
    while(k > 0) {
        int temp = v[size];
        for(int i = size ; i > 0 ; i--) {
            v[i] = v[i-1];
        }
        v[0] = temp;
        k--;
    }
    return;
}

int main () {
    vector <int> v;

    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    int k = 2;
    int size = v.size() - 1;
    reversePart(k , v, size);

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}