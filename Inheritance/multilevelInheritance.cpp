#include <iostream>

using namespace std;

class Student {
    public:
        string Name, USN;
        void studentInput(){
            cout << "Enetr the name:" << endl;
            cin >> Name;
            cout << "Enetr the USN:" << endl;
            cin >> USN;
        }
        void studentDisplay(){
            cout << "Name:" << Name << endl;
            cout << "USN:" << USN << endl;
        }
};

class Sports : public Student {
    public:
        string game;
        void sportsInput(){
            cout << "Enetr the Game:" << endl;
            cin >> game;
        }
        void sportsDisplay(){
            cout << "Game:" << game << endl;
        }
};

// multiple inheritance
class Marks: public Sports {
    private:
        float marks;
    public:
        void marksInput(){
            cout << "Enetr the marks in %:" << endl;
            cin >> marks;
        }
        void marksDisplay(){
            cout << "Marks:" << marks << endl;
        }
};

int main(){
    Marks marksObj;
    marksObj.studentInput();
    marksObj.sportsInput();
    marksObj.marksInput();
    cout << "Student information:" << endl;
    marksObj.studentDisplay();
    marksObj.sportsDisplay();
    marksObj.marksDisplay();
    return 0;
}