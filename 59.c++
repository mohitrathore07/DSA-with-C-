/*                                                                     05/10/2024                                                           */

// move all negative numbers to the beginning and the positive numbers to the end
/* 
#include <iostream>
#include <vector>
using namespace std;

void moving_numbers (int size , vector <int> &v) {
    int i = 0;
    int j = size - 1;

    while( i <= j) { 
        if(v[i] <= 0) {
            i++;
        }

        if(v[j] >= 0) {
            j--;
        }

        if(i > j) break;
        if (v[i] >= 0 && v[j] <= 0) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        } 
    }
}

void display (vector <int>& v) {
    for(int i = 0; i <= v.size() - 1; i++) {
        cout<<v[i]<< " ";
    }
}
int main () {
    vector <int> v;

    v.push_back(4);
    v.push_back(2);
    v.push_back(-1);
    v.push_back(7);
    v.push_back(6);
    v.push_back(-5);
    v.push_back(-3);
    v.push_back(-1);

    int size = v.size();
    moving_numbers(size,v);

    display(v);
    return 0;
}
*/


/* 

sort 0's 1's 2's
#include <iostream>
#include <vector>
using namespace std;

void moving_numbers (int size , vector <int> &v) {
    int R = 0;
    int W = 0;
    int B = 0;

   for(int i = 0; i <= size - 1; i++) {
    if(v[i] == 0) {
        R++;
    }
    else if(v[i] == 1) {
        W++;
    }
    else  {
        B++;
    }
   }
   
   for(int i = 0; i <= size - 1; i++) {
    if(R > 0) {
        v[i]  = 0;
        R--;
        continue;
    }
    if(W > 0) {
        v[i]  = 1;
        W--;
        continue;
    }
    if(B > 0) {
        v[i]  = 2;
        B--;
    }
   }

}

void display (vector <int>& v) {
    for(int i = 0; i <= v.size() - 1; i++) {
        cout<<v[i]<< " ";
    }
}

int main () {
    vector <int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    int size = v.size();
    moving_numbers(size,v);

    display(v);
    return 0;
}
*/

/* 
// sort 0's 1's 2's  using 1 pass method
#include <iostream>
#include <vector>
using namespace std;

void diplay(vector <int>& v) {
    for(int i = 0; i <= v.size() - 1; i++ ) {
        cout<<v[i]<<" ";
    }
}

int main () {
    vector <int> v = {1, 0 , 2 , 2 , 0 , 1 , 0 };

    int low = 0; 
    int mid = 0; 
    int hi = v.size() - 1;

    while( mid  <= hi ) {
        if(v[mid] == 2) {
            int temp = v[mid];
            v[mid ] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if(v[mid] == 0) {
            int temp = v[mid];
            v[mid ] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else mid++;
    }
    diplay(v);
    return 0;
}
*/