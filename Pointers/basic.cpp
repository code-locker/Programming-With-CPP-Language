#include <iostream>

using namespace std;

int main(){
    int *ptr;
    int num = 10;
    ptr = &num;
    cout << "Number num = " << num << endl;
    cout << "Address of num using & =" << &num << endl;
    cout << "Address of num using pointer =" << ptr << endl;
    cout << "Number num using pointer =" << *ptr << endl;
    return 0;
}