#include <iostream>

using namespace std;

int main(){
    char *ch;
    int n;
    cout << "How many number of characters you want to store?" << endl;
    cin >> n;
    ch = new char[n];
    cout << "Enter the " << n << " characters:" << endl;
    for(int i = 0; i < n; i++){
       cin >> *(ch + i);
    }

    cout << "Entered characters are:" << endl;
    for(int i = 0; i < n; i++){
       cout << *(ch + i) << " ";
    }
    cout << endl;
    delete ch;

    return 0;
}