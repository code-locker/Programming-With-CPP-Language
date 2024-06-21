#include <iostream>

using namespace std;

class Student {
    public:
        string Name, USN;
        void input(){
            cout << "Enetr the name:" << endl;
            cin >> Name;
            cout << "Enetr the USN:" << endl;
            cin >> USN;
        }
        void display(){
            cout << "Name:" << Name << endl;
            cout << "USN:" << USN << endl;
        }
};

class Sports {
    public:
        string game;
        void input(){
            cout << "Enetr the Game:" << endl;
            cin >> game;
        }
        void display(){
            cout << "Game:" << game << endl;
        }
};

// multiple inheritance
class Marks: public Student, public Sports {
    private:
        float marks;
    public:
        void input(){
            Student::input();
            Sports::input();
            cout << "Enetr the marks in %:" << endl;
            cin >> marks;
        }
        void display(){
            Student::display();
            Sports::display();
            cout << "Marks:" << marks << endl;
        }
};

int main(){
    Marks marksObj;
    marksObj.input();
    cout << "Student information:" << endl;
    marksObj.display();
    return 0;
}