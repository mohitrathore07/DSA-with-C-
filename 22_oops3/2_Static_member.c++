/*
#include <iostream>
using namespace std;

void print() {
    static int b = 10; // static se ye every time new nhi create hoga sabhi ke liye similar rhega
    cout<<b<<endl;
    b++;
}
int main() {
    print();
    print();
    print();
    return 0;
}
*/

// class level 

#include <iostream>
using namespace std;


class Bike {
    public: 
    static int a; // this belongs to the class
    int b;
    int c;
    void setNo(int aa) {
        a = aa;
        a++;
    }
    Bike(int b , int c) {
        this->b = b;
        this->c = c;
    }
    void increment() {
        a++;
        this->b++;
    }
    void get() {
        cout<<"a is and b is: "<<a<<" "<<this->b<<endl;
    }
};


int Bike::a = 0; // for static members


int main() {
    Bike am(5,1);
    am.setNo(4);

    Bike::a = 4;
    am.get();

    Bike bm(5,1);

    bm.setNo(4);
    Bike::a = 77;
    bm.get();
    
    return 0;
}