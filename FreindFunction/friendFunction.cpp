#include <iostream>

using namespace std;

class Multiply {
    private:
        int num = 2;
    public:
        void display(){
            cout << "Number = " << num << endl;
        }
        friend void multiplyByTen(Multiply *m);
        friend int multiplyBytwo(Multiply m);
};

void multiplyByTen(Multiply *m){
    // Access private member of Multipy class
    (*m).num = (*m).num * 10;
}

int multiplyBytwo(Multiply m){
    // Access private member of Multipy class
    return m.num * 2;
}

int main(){
    Multiply m;
    cout << "Before calling multiplyByTen():" << endl;
    m.display();
    multiplyByTen(&m);
    cout << "After calling multiplyByTen():" << endl;
    m.display();
    cout << "After calling multiplyByTwo():" << endl << "Number = " << multiplyBytwo(m) << endl;

    return 0;
}