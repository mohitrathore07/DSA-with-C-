/*                                                             25/09/2024                                                                        */

// vectors


// syntax
/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;

    // on inserting / input do not use []
    v.push_back(6);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    

    // to print 
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" ";

    // in case of updating a value 
    v[0]  = 88;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4];

    return 0;
}
*/

/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(5);
    v[1] = 8; // no point of adding this last me ek garbage value create ho jayegi bs
    v.push_back(10);
    v.push_back(4);

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return 0;
}
*/


// operations in vector
/* 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    /* 
    v.push_back(5);
    cout<<v.size()<<endl; // 1

    v.push_back(7);
    cout<<v.size()<<endl; // 2

    v.push_back(9);
    cout<<v.size()<<endl; // 3

    v.push_back(7);
    cout<<v.size()<<endl; // 4

 
    v.push_back(5);
    cout<<v.capacity()<<endl; // 1

    v.push_back(7);
    cout<<v.capacity()<<endl; // 2

    v.push_back(9);
    cout<<v.capacity()<<endl; // 4

    v.push_back(7);
    cout<<v.capacity()<<endl; // 4

    // capacity double when entering an element

    return 0;
}

*/

/*  // pop and access loop

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(1);
    v.push_back(8);
    v.push_back(7);

    // for(int i = 0; i <= 5; i++) {
    //     cout<<v[i]<<" ";
    // }

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    // to remove the element 
    v.pop_back();
    v.pop_back(); // remove the element from last

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}

*/

/*  remove the element from vector  
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;

    v.push_back(4);
    cout<<"size of vector: " <<v.size()<<endl;
    cout<<"capacity of vector: " <<v.capacity()<<endl;

    v.push_back(5);
    cout<<"size of vector: " <<v.size()<<endl;
    cout<<"capacity of vector: " <<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size of vector: " <<v.size()<<endl;
    cout<<"capacity of vector: " <<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size of vector: " <<v.size()<<endl;
    cout<<"capacity of vector: " <<v.capacity()<<endl;


    // on popping the element - size decreases but capacity decrease nhi hoti
    v.pop_back();
    cout<<"after pop size of vector: " <<v.size()<<endl;
    cout<<"after pop  capacity of vector: " <<v.capacity()<<endl;

    v.pop_back();
    cout<<"after 1 more pop size of vector: " <<v.size()<<endl;
    cout<<"after 1 more pop  capacity of vector: " <<v.capacity()<<endl;
     
    return 0;
}

*/


// vecor with size
/* 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /* 
    vector <int> v(5); // size diya 
    cout<<v.capacity()<<endl; 
    cout<<v.size()<<endl; // 5 answer aayega since vector created and isme by default 0 values put ho jati hai 
    
    cout<<v[1];


   /* 
    vector <int> v(5, 7); // size - 5 and each value is  7  
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" ";


   // taking the input
/* 
    vector <int> v(5); // size diya  - if size nhi dete so loops ke through input nhi le skte bcz wo size diya nhi and hmko pta nhi size kya h 
    for(int i = 0; i < 5; i++) {
        cin>>v[i];
    }
    
    for(int i = 0; i < 5; i++) {
        cout<<v[i]<<" ";
    }


// if size na diya ho to - input
/* 
    vector <int> v;  
    for(int i = 0; i < 5; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i = 0; i < 5; i++) {
        cout<<v[i]<<" ";
    }


// printing methods

    vector <int> v;  
    for(int i = 0; i < 5; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i = 0; i < 5; i++) {
        cout<<v.at(i)<<" ";
    }

    cout<<endl;

    sort(v.begin(), v.end()); // sort karke de denga

    for(int i = 0; i < 5; i++) {
        cout<<v.at(i)<<" ";
    }
    return 0;

}
*/

// passing array to function
/* 
#include <iostream>
#include <vector>
using namespace std;

// no change in the original vector just a copy
void change(vector <int> a ) {
    a[0] = 455;
    
    for(int i = 0; i < a.size(); i++) {
        cout<<a[i]<<" ";
    }
}

// now it will change the original vector
void changewithand(vector <int>& a) {
      a[0] = 455;
}

int main () {
    vector <int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(42);
    v.push_back(5);
    v.push_back(7);
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    change(v);

    cout<<endl;

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";  // no change in actual 
    }
    cout<<endl;

    changewithand(v);
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";  // no change in actual 
    }
    return 0;
}
*/