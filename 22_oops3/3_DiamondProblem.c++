/*

#include <iostream>
using namespace std;

class A {
    public: 
    int a_ka_public;
};

class B : public A {
    public: 
    int b_ka_public;
};

class C : public A {
    public: 
    int c_ka_public;
};

class D : public B, public C {
    public: 
    int d_ka_public;

    public: 
    void show() {
        // a_ka_public;  since A ka public isme use nhi kr skte
        
        // Solution
        cout<<B::a_ka_public;

        
    }
};


int main() {

    return 0;
}
*/

// diamond problem solution 2

#include <iostream>
using namespace std;

class A {
    public: 
    int a_ka_public;
};

class B : virtual public A {
    public: 
    int b_ka_public;
};

class C : virtual public A {
    public: 
    int c_ka_public;
};

class D : public B, public C {
    public: 
    int d_ka_public;

    public: 
    void show() {
        // now i can use 
        cout<<a_ka_public;
    }
};


int main() {

    return 0;
}