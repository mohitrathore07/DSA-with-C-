/*                                                           27/07/2024                                                                          */

// nested if else

// divisible by 5 & 3 but not by 15
/*
#include <iostream> 
using namespace std;

int main () {
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    // if(n%5==0 || n%3==0  && n%15!=0) {} // if we write like this so due to hierarchy of operators && side wala phle check hoga this might create some problem so the correct way is - 

    if((n%5==0 || n%3==0) && n%15!=0) {
        cout<<"number is divisible by 5 or 3 but not by 15 "<<endl;
    }
    else {
        cout<<"not matching condition"<<endl;
    }
    return 0;
}
*/


// nested if else
/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n%5==0 || n%3==0) {
        if(n%15!=0) {
            cout<<"num is divisible by 5 or 3 but not by 15"<<endl;
        }
        else {
            cout<<"num is divisible by 5 or 3 and with 15 also"<<endl;
        }
    }
    else {
        cout<<"not matching condition"<<endl;
    }
    return 0;
}
*/


#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n%3==0) {
        if (n%5==0)
        {
            cout<<"num is divisible by 3 and 5 both"<<endl;
        }
        else {
            cout<<"num is divisible by 3 bt not by 5"<<endl;
        }    
    }
    else {
        cout<<"not matching the condition"<<endl;
    }
    return 0;
}