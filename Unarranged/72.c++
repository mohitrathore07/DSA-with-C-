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