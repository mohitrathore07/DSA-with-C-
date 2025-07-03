/*                                                 12\07\2024                                                                                    */
/* // calculate SI program

#include <iostream>
using namespace std;

int main () {
    float p, r ,t;
    cout<<"enter the value of p"<<endl;
    cin>>p;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    cout<<"enter the value of t"<<endl;
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"si is: "<<si<<endl;
    return 0;
}
*/


// Relational Operators in c++

/*
#include <iostream>
using namespace std;

int main () {
    // int x = 2;
    // int y = 2;
    // cout<<(x==y)<<endl;  result will be 1 true   == equals to 

    // int a = 1;
    // int b = 2;
    // cout<<(a==b)<<endl; result will be 0 false

    // int p = 2;
    // int q = 1;
    // cout<<(p!=q)<<endl;   result will be 1 true   != not equals to 
    // cout<<(p>q)<<endl; // true since p > q
    // cout<<(p = 7); // 7 print hoga p me 7 insert ho jayegi 

    int r = 4;
    int s = 4;
    cout<<(r>=s)<<endl; // result  1 bcz true r>=s  greater than or equals to 
    cout<<(r<=s)<<endl; // result  1 bcz true r>=s  lesser than or equals to 

    int a = 2;
    int b = 4;
    cout<<(a>=b)<<endl; // result 0 
    cout<<(a<=b)<<endl; // result 1


    return 0;
}
*/


// predict the output

#include <iostream>
using namespace std;

int main () {
    int p = false;
    int q = false;
    int r = true;
    cout<<(p==q==r)<<endl; // true first two check true then true == true ----> true

    int a = 1;
    int b = 5;
    int c = 5;
    cout<<(a==b==c)<<endl; // true first two check true then false == true - false
    return 0;

}