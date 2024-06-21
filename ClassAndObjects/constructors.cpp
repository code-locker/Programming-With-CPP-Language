#include <iostream>

using namespace std;

class Circle{
    private:
        float radius;
    public:
        // Default constrcutor
        Circle(){
            radius = 1.0;
        }

        //Prameterized constructor
        Circle(float r){
            radius = r;
        }

        //Copy constructor
        Circle(Circle& circle){
            radius = circle.radius;
        }
        void display(){
            cout << "Radius=" << radius << endl;
        }
};

int main(){
    cout << "*******************************************" << endl;
    Circle c1;
    //Default constructor
    cout << "Default constructor. Raduis should be 1" << endl;
    c1.display();
    cout << "*******************************************" << endl;
    Circle c2(5);
    //Parameterized constructor
    cout << "Parameterized constructor. Raduis should be 5" << endl;
    c2.display();
    cout << "*******************************************" << endl;
    Circle c3 = c1;
    //Copyconstructor
    cout << "Method 1: Copy constructor. Raduis should be 1" << endl;
    c3.display();
    cout << "*******************************************" << endl;
    Circle c4(c2);
    //Copyconstructor
    cout << "Method 1: Copy constructor. Raduis should be 5" << endl;
    c4.display();
    cout << "*******************************************" << endl;
    return 0;
}