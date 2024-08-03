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