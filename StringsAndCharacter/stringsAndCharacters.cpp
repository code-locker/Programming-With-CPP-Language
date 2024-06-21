#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    char grade;
    string fullName;
    cout << "Enter the Name:" << endl;
    // cin >> Name;  //Cannot hold names with spaces
    getline(cin, fullName);
    cout << "Enter the grade:" << endl;
    cin >> grade;

    cout << "Name is " << fullName << " and the grade is " << grade << endl;

    // access character using index
    fullName[0] = 'C';
    cout << "Name is " << fullName << " and the grade is " << grade << endl;
    cout << "Length of the name is " << fullName.length() << endl;

    // substr(),strcat_s(),strcmp(),strcpy_s(),strlen()
    // Note: include cstring header for strcat_s(),strcmp(),strcpy_s(),strlen()

    // substr()
    string s1 = "Abhishek Kumar K";
    cout << "First name is " << s1.substr(0, 8) << endl;

    // strcat(),strcmp(),strcpy(),strlen()
    char cs1[10] = "Kumar";
    char cs2[5] = "K";
    char cs3[10] = "A";

    cout << "Concatinated string is " << strcat(cs1,cs2) << endl;

    cout << "CS1= " << cs1 << " CS2=" << cs2 << " and CS3=" << cs3 << endl;

    cout << "Compare " << cs1 << " and " << cs1 << ": " << strcmp(cs1,cs1) << endl;
    cout << "Compare " << cs2 << " and " << cs3 << ": " << strcmp(cs2,cs3) << endl;
    cout << "Compare " << cs3 << " and " << cs2 << ": " << strcmp(cs3,cs2) << endl;

    cout << "CS1= " << cs1 << " CS2=" << cs2 << " and CS3=" << cs3 << endl;
    cout << "Copy CS1 to CS2: " << strcpy(cs2,cs1) << endl;
    cout << "CS1= " << cs1 << " CS2=" << cs2 << " and CS3=" << cs3 << endl;
    cout << "Copy CS3 to CS2: " << strcpy(cs2,cs3) << endl;
    cout << "CS1= " << cs1 << " CS2=" << cs2 << " and CS3=" << cs3 << endl;

    cout << "Length of  " << cs1 << " is " << strlen(cs1) << endl;
    return 0;
}