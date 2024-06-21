#include <iostream>

using namespace std;

void swapUsingCallByValue(int numA, int numB){
    cout << "Function swapUsingCallByValue: Before swapping numA=" << numA << " numB=" << numB << endl;
    int temp = numA;
    numA = numB;
    numB=temp;
    cout << "Function swapUsingCallByValue: After swapping numA=" << numA << " numB=" << numB << endl;
}

void swapUsingCallByReference(int *numA, int *numB){
    cout << "Function swapUsingCallByReference: Before swapping numA=" << *numA << " numB=" << *numB << endl;
    int temp = *numA;
    *numA = *numB;
    *numB=temp;
    cout << "Function swapUsingCallByReference: After swapping numA=" << *numA << " numB=" << *numB << endl;
}

int main(){
    int numA, numB;
    cout << "Enter two integers:" << endl;
    cin >> numA >> numB;
    cout << "***** Swap two numbers using call by value *****" << endl;
    cout << "Function main: Before swapping numA=" << numA << " numB=" << numB << endl;
    swapUsingCallByValue(numA, numB);
    cout << "Function main: After swapping numA=" << numA << " numB=" << numB << endl;
    cout << endl;
    cout << "***** Swap two numbers using call by reference *****" << endl;
    cout << "Function main: Before swapping numA=" << numA << " numB=" << numB << endl;
    swapUsingCallByReference(&numA, &numB);
    cout << "Function main: After swapping numA=" << numA << " numB=" << numB << endl;
    cout << endl;

    return 0;
}