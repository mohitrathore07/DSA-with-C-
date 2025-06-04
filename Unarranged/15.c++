/*                                                            23/07/2024                                                                         */
//  multiple conditions using  && and ||   

// question three digit number check
#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    if(n>=100 && n <= 999) { // both condition should be true
        cout<<"3 digit number"<<endl;
    }
    else {
        cout<<"not a 3 digit number"<<endl;
    }
}