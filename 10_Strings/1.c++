/*                                                              30-12-2024                                                             */

// string intro 
/*
#include <iostream>
using namespace std;

int main () {
    char str[] = {'a','b','c','d','e','f'};
    for(int i = 0; i < 6; i++) {
        cout<<str[i]<<" ";
    }
    return 0;
}
*/

#include<iostream>
#include<string> 
using namespace std;

int main () {
    string str = "Mohit Rathore";
    // cout<<str<<endl;

    // cout<<str[0]<<endl; // print by indexing


    // input in string
    string st;
    // cin>>st; // space nhi de skte - problem

    // cout<<st<<endl;

    // solution of taking input 
    string name;
    getline(cin, name); // name - string name 

    cout<<name;
    return 0;
}



/*
// rotate string by k place
#include <iostream>
using namespace std;

int main () {
    string str = "abc";
    string ans = "";

    int k = 2;
    while (k > 0)
    {
        char s = str[0];
        int i = 0;
        while (i < str.length()-1)
        {
            str[i] = str[i+1];
            i++;
        }
        str.pop_back();
        str.push_back(s);
        k--;
    }
    
    cout<<str<<" ";
}

*/