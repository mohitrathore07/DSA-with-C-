/*                                                             25/09/2024                                                                        */

/*  // find last occurance of x
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v(5);
    for(int i = 0 ; i < 5; i++) {
        cin>>v[i];
    }
    int x = 4;
    int flag = false;
    for(int i = 5 ; i > 0; i--) {
        if(v[i] == x) {
            cout<<x<<" is at: "<<i<<endl;
            flag = true;
            break;
        }
    }
    if(flag == false ) {
        cout<<"x is not present: ";
    }
    return 0;
}
*/

/*
/// M - 2
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v(5);
    for(int i = 0 ; i < 5; i++) {
        cin>>v[i];
    }
    int x = 4;
    int idx = -1;
    // for(int i =  0; i < v.size(); i++) {
    //     if(v[i] == x) {
    //         idx = i;
    //     }
    // }

    for(int i =  v.size() - 1; i > 0; i--) {
        if(v[i] == x) {
            idx = i;
            break;
        }
    }
    cout<<idx;
    return 0;
}
*/


#include <iostream>
#include <vector> 
using namespace std;

int main () {
    vector <int> v(5);
    for(int i = 0 ; i < 5; i++) {
        cin>>v[i];
    }
    int x = 5;
   for(int i = 0; i < v.size() - 1; i++) {
        for(int j = i + 1; j < v.size(); j++) { 
            if(v[i] + v[j] == x) {  
                cout << i << " and " << j << endl;
            }
        }
    }
    return 0;
}