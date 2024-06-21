#include <iostream>

using namespace std;

class Circle{
    private:
        float PI = 3.14;

    public:
        float radius;

        float area(){
            return PI * radius * radius;
        }
};

int main(){
    cout << "***** Area of the circle using pointers to object *****" << endl;
    Circle *objCircleDot = new Circle;
    Circle *objCircleArrow = new Circle;
    cout << "Enter the radius of the first circle:" << endl;
    cin >> (*objCircleDot).radius;

    cout << "Enter the radius of the second circle:" << endl;
    cin >> objCircleArrow->radius;

    if((*objCircleDot).radius <= 0){
        cout << "Invalid input for the first circle" << endl;
    }
    else{
        // using dot(.) operator
        cout << "Area of the circle is " << (*objCircleDot).area() << endl;
    }

    if(objCircleArrow->radius <= 0){
        cout << "Invalid input for the second circle" << endl;
    }
    else{
        // using arrow(->) operator
        cout << "Area of the circle is " << objCircleArrow->area() << endl;
    }
    return 0;
}