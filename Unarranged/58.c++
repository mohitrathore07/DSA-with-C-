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
/* 
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
*/

// 0's and 1's sort
 // M - 1 two pass method
/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int noz = 0, noo = 0; 
    for(int i = 0; i < v.size(); i++) {
        if(v[i]==0) {
            noz++;
        }
        else {
            noo++;
        }
    }

    for(int i = 0; i < v.size(); i++) {
        if(noz>0) {
            v[i] = 0;
            noz--;
        }
        else {
            v[i] = 1;
        }
    }
      for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}
*/

// M - 2 two pointer method

/*
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0); 
    v.push_back(1);
    int n = 0;
    int m = v.size()-1;
    while(n < m) {
        if(v[n]==0) {
            n++;
        }
        if(v[m]==1) {
            m--;
        }
        if(n>m) break;
        if(v[n] == 1 && v[m] == 0) {
            v[n] = 0;
            v[m] = 1;
            n++;
            m--;
        }
        
    }
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
*/

