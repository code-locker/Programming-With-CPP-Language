#include <iostream>

using namespace std;

int main(){
    char grade[5] = {'A', 'B', 'C', 'D', 'E'};
    char* ptr;
    cout << "Possible ways to access array elements:" << endl;
    for(int i = 0; i < 5; i++){
        cout << grade[i] << " "; //*(grade+i)
        cout << i[grade] << " "; //*(i+grade)
        cout << *(grade+i) << " ";
        cout << *(i+grade) << " " << endl;
    }

    cout << endl << "Accessing array elements using pointers:" << endl;
    ptr = grade;
    for(int i = 0; i < 5; i++){
        cout << *ptr++ << " ";
    }
    cout << endl;
    
    return 0;
}