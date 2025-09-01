/*
#include <iostream>
using namespace std;

class A {
    private: int a_private = 10;

    public: 
        friend void show(A &a); // friend is a keyword - allows accessibility of private/protected members to be accessible
};

void show(A &a) { // inside wali method ka declaration
    cout<<a.a_private;
}

int main() {
    A a;
    show(a);
    return 0;
}
*/


// operator overloading easy
/*
#include <iostream>
using namespace std;


class ComplexNumber {
    public: 
        int imaginary;
        int real;

    // friend function
    friend ComplexNumber operator +(ComplexNumber &a1 ,ComplexNumber &a2);
};

ComplexNumber operator +(ComplexNumber &a1 ,ComplexNumber &a2) {
        ComplexNumber a3;
        a3.imaginary = a1.imaginary - a2.imaginary;
        a3.real = a1.real - a2.real;
        return a3;
}

int main() {
   ComplexNumber a1 ;
   ComplexNumber a2 ;
   a1.real = 5;
   a2.real = 7;
   a1.imaginary = 4;
   a2.imaginary = 8;
   
   ComplexNumber a3 = a1 + a2;
   cout<<"a3 imaginary part: "<<a3.imaginary<<" real part: "<<a3.real<<endl;
    return 0;
}


*/

#include <iostream>
using namespace std;


class ComplexNumber {
    public: 
        int imaginary;
        int real;

    // friend function
    friend ComplexNumber operator +(ComplexNumber &a1 ,ComplexNumber &a2);

    // friend class
    friend class OurClass; // is class ko baad me define  so that ye is class ke private ko access kr paye
};

int main() {
   ComplexNumber a1 ;
   ComplexNumber a2 ;
   a1.real = 5;
   a2.real = 7;
   a1.imaginary = 4;
   a2.imaginary = 8;
   

    return 0;
}