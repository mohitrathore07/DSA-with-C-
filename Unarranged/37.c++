/*                                                                 28/08/24                                                                      */

// Quiz
/* GCD  
#include <iostream>
using namespace std;

int main () {
    int num1 , num2;
    cout<<"Enter two number (num1 > num2): ";
    cin>>num1 >> num2;

    if(num2 > num1) {
     swap(num1, num2);
    }

    while(num2 != 0) {
        int r = num1 %  num2;
        num1 = num2;
        num2 = r;
    }
    cout<<num1;
    return 0;
}
*/