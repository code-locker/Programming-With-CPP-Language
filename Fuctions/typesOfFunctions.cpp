#include <iostream>

using namespace std;

void evenOrOdd(){
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if(num % 2)
        cout << "Number is odd." << endl;
    else
        cout << "Number is even." << endl;
    cout << endl;
}

void oddOrEven(int n){
    if(n % 2)
        cout << "Number is odd." << endl;
    else
        cout << "Number is even." << endl;
    cout << endl;
}

string oddOrEvenWithReturn(){
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if(num % 2)
        return "Number is odd.";
    else
        return "Number is even.";
}

string oddOrEvenWithArgAndWithReturn(int n ){
    if(n % 2)
        return "Number is odd.";
    else
        return "Number is even.";
}

int main(){
    // 1.Functions with no arguments and no return value
    cout << "***** 1.Functions with no arguments and no return value *****" << endl;
    evenOrOdd();

    // 2.Functions with arguments and no return value
    cout << "***** 2.Functions with arguments and no return value *****" << endl;
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    oddOrEven(num);

    // 3.Functions with no arguments and with return value
    cout << "***** 3.Functions with no arguments and with return value *****" << endl;
    string ans = oddOrEvenWithReturn();
    cout << ans << endl;
    cout << endl;

    // 4.Functions with arguments and with return value
    cout << "***** 4.Functions with arguments and with return value *****" << endl;
    cout << "Enter the number" << endl;
    cin >> num;
    ans = oddOrEvenWithArgAndWithReturn(num);
    cout << ans << endl;
    return 0;
}