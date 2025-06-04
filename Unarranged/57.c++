/*                                                             01/10/2024                                                                        */

//  array + 1
// 8 5 6 2 5
// 5 8 5 6 2
/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v(5);
    vector <int> v2(v.size());

    for(int i = 0; i <= v.size() - 1; i++) {
        cin>>v[i];
    }

    for(int i = 0; i <= v.size() - 1; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int last = v[v.size() - 1];
    v2[0] = last;

    for(int i = 0; i <= v2.size() - 2; i++) {
        v2[i+1] = v[i];
    }

    for(int i = 0; i <= v2.size() - 1; i++) {
        cout<<v2[i]<<" ";
    }

    return 0;
}
*/


// rotating the array

/* 
#include <iostream>
#include <vector>
using namespace std;

void display (vector <int> v) {
    for(int i = 0; i <= v.size() - 1; i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    vector <int> v(5);
    vector <int> v2(v.size());

    for(int i = 0; i <= v.size() - 1; i++) {
        cin>>v[i];
    }
    display(v);
    cout<<endl;

    for(int i = 0; i <= v.size() - 1; i++) {
        v2[i] = v[v.size() - 1 - i];
    }
    display(v2);

    return 0;
}
*/


// reverse array without using a new array
#include <iostream>
#include <vector>
using namespace std;

void display (vector <int> v) {
    for(int i = 0; i <= v.size() - 1; i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    vector <int> v(5);

    for(int i = 0; i <= v.size() - 1; i++) {
        cin>>v[i];
    }
    display(v);
    cout<<endl;
    int i = 0;
    int j = v.size() - 1;
    /* 
    while(i<=j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
*/
    // M - 2 using for loop
    for (int i = 0, j = v.size()-1 ; i <= j; i++,j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);

    return 0;
}