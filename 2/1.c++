/*                                                                19/07/2024                                                                     */

// if else conditional statements

/*
#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number: ";
    int n; 
    cin>>n;
    if(n%2==0) {   // only if this condition is true then only will this work
        cout<<"number is even"<<endl; 
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number: ";
    int n; 
    cin>>n;
    if(n%2==0) {   // only if this condition is true then only it will execute 
        cout<<"number is even"<<endl; 
    }
    if (n%2!=0) {
        cout<<"number is odd"<<endl; 
    }
    return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number: ";
    int n; 
    cin>>n;
    if(n%2==0) {   // only if this condition is true then only it will execute 
        cout<<"number is even"<<endl; 
    }
    else {
        cout<<"number is odd"<<endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main () {
    cout<< "Enter a number:  ";
    int n;
    cin>>n;
    if (n%5 == 0)
    {
        cout<<"number is divisible by 5"<<endl;
    }
    else {
        cout<<"number is not divisible by 5"<<endl;
    }
    
    return 0;
}