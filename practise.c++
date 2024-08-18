
/*
// Leap Year Program 
#include <iostream>
using namespace std;

int main () {
    int year;
    cout<<"Enter an integer: "<<endl;
    cin>>year;

    // if((year%4==0 || year % 400 == 0) && year % 100 != 0 ) 
    if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) // for exceptions like 2000 it will give a perfect solution 
    {
        cout<<"leap"<<endl;
    }
    else {
        cout<<"not a leap"<<endl;
    }
    return 0;
}
*/

/*
// greater num 
#include <iostream>
using namespace std;

int main () {
    int num1;
    int num2;
    int num3;
    cout<<"enter any 3 integers: "<<endl;
    cin>>num1>>num2>>num3;

    if (num1 == num2 && num2 == num3) {
        cout<<"all are equal num: "<<endl;
    }
    else if((num1 >= num2) && (num1 >= num3)) {
        cout<<"greater is num1: "<<num1<<endl;
    }
    else if((num2 >= num1 ) && (num2 >= num3)) {
        cout<<"greater is num2: "<<num2<<endl;
    }
    else {
        cout<<"greater is num3: "<<num3<<endl;
    }
    return 0;
}

*/

