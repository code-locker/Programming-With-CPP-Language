#include <iostream>

using namespace std;

class Distance{
    private:
        int kilometer, meter;
    public:
        void input(){
            cout << "Enter the kilometer:" << endl;
            cin >> kilometer;
            cout << "Enter the meter:" << endl;
            cin >> meter;
        }
        // Unary operator overloading
        void operator--(){
            --kilometer;
            --meter;
        }

        // Binary operator overloading
        Distance operator+(Distance& person){
            Distance t;
            t.kilometer = kilometer + person.kilometer;
            t.meter = meter + person.meter;
            return t;
        }

        void display(){
            cout << "Kilometer=" << kilometer << " and meter=" << meter << endl;
        }
};

int main(){
    cout << "***** Unary Operator overloading *****" << endl;
    Distance d;
    d.input();
    cout << "Before the operation of operator overloading:" << endl;
    d.display();
    --d;
    cout << "After the operation of operator overloading:" << endl;
    d.display();


    cout << endl << "***** Binary Operator overloading *****" << endl;
    Distance personA, personB, totalDistance;
    cout << "Enter the distance covered by person A:" << endl;
    personA.input();
    cout << "Distance covered by person A:" << endl;
    personA.display();

    cout << "Enter the distance covered by person B:" << endl;
    personB.input();
    cout << "Distance covered by person B:" << endl;
    personB.display();

    cout << "Total distance covered by person A and person B is:" << endl;
    totalDistance = personA + personB;
    totalDistance.display();

    return 0;
}