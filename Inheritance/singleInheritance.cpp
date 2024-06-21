#include <iostream>

using namespace std;

class Student{
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

//Single inheritance
class Sports:public Student {
    public:
        string game;
        void sInput(){
            Student::input();
            cout << "Enetr the Game:" << endl;
            cin >> game;
        }
        void sDisplay(){
            Student::display();
            cout << "Game:" << game << endl;
        }
};

int main(){
    Sports s;
    //s.input(); // Valid
    s.sInput();
    cout << "Student information:" << endl;
    //s.display(); // Valid
    s.sDisplay();
    return 0;
}