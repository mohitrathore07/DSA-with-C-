/*                                                         15/08/2024                                                                             */

// Question 

/*
#include <iostream>
using namespace std;

int main () {

    for(int i = 1; i <= 10; i++) {
        cout<<i<<"\n";
    }
    return 0;
}
*/

// print all the even numbers

/*
#include <iostream>
using namespace std;

int main () {
    for (int i = 1; i <= 100; i++) {
        if(i%2==0) {
            cout<<i<<"\n";
        }
    }
    return 0;
}
*/


// print the table of 19
/*
#include <iostream>
using namespace std;

int main () {
    for (int i = 1; i <= 10; i++) {
        cout<<19*i<<endl;
    }
    return 0;
}
*/

// print the table of 19 - another way
/*
#include <iostream>
using namespace std;

int main () {
    for (int i = 19; i <= 190; i+=19) {
        cout<<i<<endl;
    }
    return 0;
}
*/

/*
// another way
#include <iostream>
using namespace std;

int main () {
    for (int i = 19; i <= 190; i++) {
        if(i%19==0) cout<<i<<endl;
    }
    return 0;
}
*/

// Simple If-Else: Write a program to check whether a given number is positive, negative, or zero using if-else statements.
/*
#include <iostream>
using namespace std;

int main () {
    int i;
    cin>>i;

    if(i==0) {
        cout<<"zero"<<endl;
    }
    else if (i%2!=0) {
        cout<<"odd number"<<endl;
    }
    else {
        cout<<"even"<<endl;
    }
    return 0;
}
*/

// Nested If-Else: Create a program that takes three integers and prints the largest among them using nested if-else.

#include <iostream>
using namespace std;

int main () {
    int i,j,k;
    cin>>i>>j>>k;

    if ((i >= j) && (i >= k)) {
        cout<<"greater is i: "<<i<<endl;
    }

    else if ((j >= i ) && (j >= k)) {
        cout<<"greater is j: "<<j<<endl;
    }

    else {
        cout<<"greater is k: "<<k<<endl;
    }

    return 0;
}