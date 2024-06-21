#include <iostream>

using namespace std;
class Base{
    public:
        // Run time polymorphism
        virtual void display(){
            cout << "Base class display method." << endl;
        }
        void print(){
            cout << "Base class print method." << endl;
        }
};

class Derived: public Base{
    public:
        void display(){
            cout << "Derived class display method." << endl;
        }
        void print(){
            cout << "Derived class print method." << endl;
        }
};

int main(){
    Base b1, *b2;
    Derived d;
    b2 = &b1;
    b2->display();
    b2->print(); // Both print called from base class
    b2 = &d;
    b2->display();
    b2->print(); // Both print called from base class

    return 0;
}