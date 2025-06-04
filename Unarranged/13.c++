/*                                                           20/07/2024                                                                          */

//find absolute value of an integer 
/*
#include <iostream>
using namespace std;
 
int main () {
    int n;
    cout<<"enter any integer: ";
    cin>>n;

    if (n<0)
    {
        // n *= -1;
        // cout<<"absolute value is: "<<n<<endl;

        cout<<"absolute value is: "<<(-n)<<endl;
    }

    else {
        cout<<"absolute value: "<<n<<endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<0) {
        n = -n;
    }
    cout<<n;
    return 0;
}