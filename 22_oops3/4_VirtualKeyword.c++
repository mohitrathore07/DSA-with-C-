

/* e.g. - without virtual keyword */

/*

#include <iostream>
using namespace std;

class Base {
    public: 
        void display () {
            cout<<"Base class display"<<endl;
        }
};

class Derived : public Base {
    public: 
        void display () {
            cout<<"Derived class display"<<endl;
        }
};



int main () {

    Base* ptr; // Base type ka pointer

    Derived d;
    ptr = &d; // ptr me d ka address store kar diya

    ptr->display(); // since virtual keyword nhi h so compile time binding hogi type dekh ke decide ki kiska method call so Base class method called
    return 0;
}
*/

/*

// use of virtual keyword
#include <iostream>
using namespace std;

class Base {
    public: 
    void virtual display () { // virtual banaya
    cout<<"Base class display"<<endl;
}
};

class Derived : public Base {
    public: 
        void display () {
            cout<<"Derived class display"<<endl;
        }
    };
    
    
    
    int main () {

    Base* ptr; // Base type ka pointer
    
    Derived d;
    ptr = &d; // ptr me d ka address store kar diya
    
    ptr->display(); // since virtual keyword  so run time binding hogi actual object kiska h uske according method calling - so dervied ki ho jayegi
    return 0;
}
*/

/*
// use of virtual keyword
#include <iostream>
using namespace std;

class Base {
    public: 
    void virtual display () { // virtual banaya
    cout<<"Base class display"<<endl;
}
};

class Derived : public Base {
    public: 
        void display () {
            cout<<"Derived class display"<<endl;
        }
    };
    
    class Child : public Derived {
        public: 
        void display () {
            cout<<"child class display"<<endl;
        }
    };
    
    
    
    int main () {
        
    Derived* ptr;

    Child c;
    ptr = &c;
    
    ptr->display(); /// if virtual  nhi so parent class ka call jo bhi c extend kar rha hoga uski if virtual h so child ka call
    return 0;
}
*/