
#include <iostream>
using namespace std;

class ComplexNumber {
    public: 
        int imaginary;
        int real;


    // way 2 
    ComplexNumber add(ComplexNumber &a) {
        ComplexNumber a3;
        cout<<" img"<<this->imaginary;
        a3.imaginary = this->imaginary + a.imaginary;
        a3.real = this->real + a.real;
        return a3;
    }

    // way 3 - operator overloading
    ComplexNumber operator +(ComplexNumber &a) {
        ComplexNumber a3;
        a3.imaginary = this->imaginary + a.imaginary;
        a3.real = this->real + a.real;
        return a3;
    }

    // minuns
    ComplexNumber operator -(ComplexNumber &a) {
        ComplexNumber a3;
        a3.imaginary = this->imaginary - a.imaginary;
        a3.real = this->real - a.real;
        return a3;
    }
};

int main() {
    ComplexNumber a1 , a2;

    a1.imaginary = 21;
    a2.imaginary = 4;
    a1.real= 9;
    a2.real= 7;

    /*
    // we want ki real part me real part add and imaginary me imaginary - way 1

    ComplexNumber a3;
    a3.imaginary = a1.imaginary + a2.imaginary;
    a3.real = a1.real + a2.real;
    */

    // way 2
    // ComplexNumber a3 = a1.add(a2);
    // cout<<endl;
    // cout<<a3.imaginary<<" "<<a3.real;


    // way 3 operator overloading

    ComplexNumber a3 = a1 + a2; // humne is + ka mtlb define kr diya overload krke
    cout<<"a3 imaginary part: "<<a3.imaginary<<" real part: "<<a3.real<<endl;

    ComplexNumber a4 = a1 - a2; 
    cout<<"a4 imaginary part: "<<a4.imaginary<<" real part: "<<a4.real<<endl;

    // 3 ke liye
    ComplexNumber a5 = a1 + a2 + a3; 
    cout<<"a5 imaginary part: "<<a5.imaginary<<" real part: "<<a5.real<<endl;

    return 0;
}