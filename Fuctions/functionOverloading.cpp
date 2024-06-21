#include <iostream>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

float sum(int a, float b){
    return a + b;
}

int main(){
    int iNum1, iNum2, iNum3;
    float fNum;
    
    cout << "Enter three integer numbers and one float point number:" << endl;
    cin >> iNum1 >> iNum2 >> iNum3 >> fNum;
    
    cout << iNum1 << "+" << iNum2 << "=" << sum(iNum1, iNum2) << endl;

    cout << iNum1 << "+" << iNum2 << "+" << iNum3 << "=" << sum(iNum1, iNum2, iNum3) << endl;

    cout << iNum1 << "+" << fNum << "=" << sum(iNum1, fNum) << endl;
    return 0;   
}