#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // pure virtual function
    virtual void draw() = 0;  
    virtual double area() = 0;
};

// Derived class 1
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

// Derived class 2
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    double area() override {
        return length * breadth;
    }
};

int main() {
    // Shape s; ❌ Not allowed (abstract class object can't be created)

    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);

    s1->draw();
    cout << "Area: " << s1->area() << endl;

    s2->draw();
    cout << "Area: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}
