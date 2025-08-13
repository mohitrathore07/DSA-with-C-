/*                                                                01/08/2024                                                                     */
// calculator
/*
#include <iostream>
using namespace std;

int main () {
    int a , b;
    cin>>a>>b;

    char x;
    cin>>x;

    if(x == '+') {
        cout<<a+b;
    }
    if(x == '-') {
        cout<<a-b;
    }
    if(x == '*') {
        cout<<a*b;
    }
    if(x == '/') {
        cout<<a/b;
    }
    return 0;
}

*/


#include <iostream>
using namespace std;

int main () {
    int a , b;
    cin>>a>>b;

    char x;
    cin>>x;

    switch (x)
    {
    case '+':
        cout<<"result: "<<a+b;
        break;
    case '-':
        cout<<"result: "<<a-b;
        break;
    case '*':
        cout<<"result: "<<a*b;
        break;
    case '/':
        cout<<"result: "<<a/b;
        break;
    
    default:
    cout<<"wrong operation";
        break;
    }
    return 0;
}