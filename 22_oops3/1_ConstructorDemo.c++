/*
#include <iostream>
using namespace std;

class ConstructorDemo {
    private: 
    int a;

    public:
    ConstructorDemo() {
        cout<<"default constructor"<<endl;
    }
    
    ConstructorDemo(int a) {
        this->a = a;
        cout<<"parametarised constructor a: "<<a<<endl;
    }

};

int main() {
    ConstructorDemo c;
    ConstructorDemo cd(4);
    return 0;
}
*/


/*

// Destructor
#include <iostream>
using namespace std;

class ConstructorDemo {
    private: 
    int a;

    public:
    ConstructorDemo() {
        cout<<"default constructor"<<endl;
    }
    
    ConstructorDemo(int a) {
        this->a = a;
        cout<<"parametarised constructor a: "<<a<<endl;
    }

    // Destructor
    ~ConstructorDemo() {
        cout<<"destructor called"<<endl;
    }
};

int main() {
    ConstructorDemo c;
    ConstructorDemo cd(4);

    bool flag = true;
    if(flag) {
        ConstructorDemo cda(4);
    }
    
    return 0;
}
*/


