#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length, breadth;

        int perimeter(){
            return 2 * (length + breadth);
        }

        int area(){
            return length * breadth;
        }
};

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
    cout << "***** Area and Perimeter of the rectangle *****" << endl;
    Rectangle objRect;
    cout << "Enter the length and breadth of the rectangle:" << endl;
    cin >> objRect.length >> objRect.breadth;
    if(objRect.length <= 0 || objRect.breadth <= 0){
        cout << "Invalid input" << endl;
    }
    else{
        cout << "Area of the rectangle is " << objRect.area() << endl;
        cout << "Perimeter of the rectangle is " << objRect.perimeter() << endl;
    }
    cout << "***** Area of the circle *****" << endl;
    Circle objCircle;
    cout << "Enter the radius of the circle:" << endl;
    cin >> objCircle.radius;
    if(objCircle.radius <= 0){
        cout << "Invalid input" << endl;
    }
    else{
        cout << "Area of the circle is " << objCircle.area() << endl;
    }

    return 0;
}