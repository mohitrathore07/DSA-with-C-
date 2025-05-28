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


/*                                                               25/07/2024                                                                      */

// divisible by 5 and divisible by 3
/*
#include <iostream>
using namespace std;
 
int main () {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n % 5 == 0 && n % 3 == 0)  // or use n%15 == 0 simply
    {
        cout<<"divisible by both"<<endl;
    }
    else {
        cout<<"not divisible by 5 & 3"<<endl;
    }
    return 0;
}
*/

// divisible by 5 or divisible by 3
/*
#include <iostream>
using namespace std;

int main () {
 int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n % 5 == 0 || n % 3 == 0)  
    {
        cout<<"divisible by 5 or 3 "<<endl;
    }
    else {
        cout<<"not divisible by 5 nor 3"<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main () {
    int n1 , n2 , n3;
    cout<<"enter three integers: "<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    if(n1 > n2 && n1 > n3) {
        cout<<"greter is n1: "<<n1<<endl;
    }
    if (n2 > n1 && n2 > n3) {
        cout<<"greater is: "<<n2<<endl;
    }
    if (n3 > n1 && n3 > n2){
        cout<<"greater is: "<<n3<<endl;
    }
    return 0;
}
*/


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