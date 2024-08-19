/*                                                                  19/08/2024                                                                   */

// Break & Continue

// composite number - which has more than two factors
/* 
#include <iostream>
using namespace std;

int main () {
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i = 2; i < n-1;i++) {
        if(n%2==0) {
            cout<<n<<"Composite number"<<endl;
            break; // break will terminate the loop finish the loop
        }
    }
    return 0;
}
*/

/* 
// prime number
#include <iostream>
using namespace std;

int main () {
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    bool flag = true;
    for(int i = 2; i < n-1; i++) {
        if(n%2==0) {
            flag = false;
            break; // break will terminate the loop finish the loop
        }
    }

    if(n == 1) {
        cout<<'1 is neither prime nor composite'<<endl;
    }
    else if(flag == true) {
        cout<<n<<" is prime"<<endl;
    }

    else {
        cout<<n<<"is composite and not prime"<<endl;
    }
    return 0;
}
*/

// Continue 

#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 10;i++) {
        if(i % 2 == 0) {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}