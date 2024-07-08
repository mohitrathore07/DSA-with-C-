/*                                                             08/07/2024                                                                         */
/// BASIC ARITHMATIC OPERATORS
/*
#include <iostream>
using namespace std;

int main () {
    int x = 5;
    int y = 2;
    cout<<x/y<<endl; // gives 2 ans int hi milega convert hoke not 2.5 ❌ 2 

    cout<<"values of z"<<endl;
    int z;
    z = x+y;
    cout<<z<<endl;
    z = x-y;
    cout<<z<<endl;
    z = x*y;
    cout<<z<<endl;
    z = x/y;
    cout<<z<<endl;

    // Increment/ Decrement Operators 
    cout<<"increment/decrement operators";
    int a = 4;
    cout<<a<<endl;
    a++; //shortend for a = a + 1;
    cout<<a<<endl;
    ++a; // also a = a+1
    cout<<a<<endl;

    cout<<endl;
    int b = 6;
    cout<<b<<endl;
    cout<<b++<<endl; // it will print 6 then icrease 1 after printing so 6 printed as it is and then +1 =  7 // postincrement
    cout<<++b<<endl; //  it will add 1 first means 7+1 = 8  then print 8 // preincrement

    cout<<b--<<endl;
    cout<<--b<<endl;

    // float data types - used to store floating values
    float q = 3.5;
    cout<<q<<endl;

    q = q + 1;
    cout<<q<<endl;

    float d = 5;
    float f = 2;
    cout<<d/f<<endl; // gives 2.5
    cout<<5/2<<endl; // gives 2  // computer ise integer consider karega bcz variable float data type ka hai naki values

    cout<<5.0/2<<endl; // gives 2.5
    cout<<5/2.0<<endl; // gives 2.5

    // without initialization
    cout<<35/7<<endl;



    return 0;
}  */



                                                   //                question find remainder                      //
/* 
#include <iostream>
using namespace std;
int main () {
    int a = 5; // divident
    int b = 2; // divisor

    int q = a / b; // quotient nikala sabse phle

    int r; // remainder

    // formula to get ans(remainder)

    r = a - (b*q);
    cout<<r<<endl;
    return 0;
}  

*/

/* 
//                                                                               ABOUT MODULUS OPERATORS                                                                                //

#include <iostream>
using namespace std;
int main () {
    // modulus  operator - to get remainder
    int a = 5;
    int b = 2;
    cout<<a%b<<endl; // gives u remainder  

    cout<<9%4<<endl; // 1

    cout<<-9%4<<endl; // -1  // -a % b always negative value

    cout<<9%-4<<endl; // 1  // a % -b always positive value

    cout<<-9%-4<<endl; // 1  // -a % -b always negative value
    return 0;
}  
*/


//                                                                               QUESTION                                                                                               //

//  calculating percentage of 5 subjects

/* 
#include <iostream>
using namespace std;

int main() {

    float s1 = 90;
    float s2 = 94;
    float s3 = 92;
    float s4 = 98;
    float s5 = 90;

    float percentage = (s1 + s2 + s3 + s4 + s5) / 5;  // returns in float bcz all in float/float - returns a float 
    cout<<percentage<<endl;

    cout<<"what if int"<<endl;
    int a1 = 90;
    int a2 = 94;
    int a3 = 92;
    int a4 = 98;
    int a5 = 90;

    float percentageint = (a1 + a2 + a3 + a4 + a5) / 5;  // if all floats int hote to int return hota bcz int/int is int 

    cout<<percentageint<<endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    bool flag = true;      // bool me true/ false store hota hai  true - 1 false - 0
    cout<<flag<<endl;

    bool flag2 = false;      // true - 1 false - 0
    cout<<flag2<<endl;

    cout<<(5>2)<<endl; // it is true 1 will return

    cout<<(5<2)<<endl; // it is false 0 will return

    cout<<(5==2)<<endl; // equal equal both not matched

    cout<<(5==5)<<endl; // equal equal both  matched

    cout<<(5!=2)<<endl; // not equal to  - true

    cout<<(5!=5)<<endl; // not equal to -  false

    return 0;
}