/*                                                           26/07/2024                                                                          */

// alphabet or not question
#include <iostream>
using namespace std;

int main () {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    // cout<<(int)ch<<endl;
    int asci = (int)ch;
    // if (asci >= 97 && asci <= 122) {
    //     cout<<"the character is lower case alphabet: "<<endl;
    // }
    // if (asci >= 65 && asci <= 90) {
    //     cout<<"the character is upper case alphabet: "<<endl;
    // }

    if (asci >= 97 && asci <= 122 || asci >=65 && asci <= 90) {
        cout<<"the character is an alphabet"<<endl;
    }
    else {
        cout<<"Entered is not an alphabet"<<endl;
    }
    return 0;
}