#include <iostream>

using namespace std;
int main(){
    // factorial of a number using while loop
    int num, fact = 1;
    cout << "Enter the number:" << endl;
    cin >> num;
    if(num <= 0){
        cout << "Factorial of a number " << num << " is " << fact << endl;
        return 0;
    }
    int dublicateNum = num;
    while(num){
        fact = fact * num;
        num--;
    }
    cout << "while loop: Factorial of a number " << dublicateNum << " is " << fact << endl;

    // factorial of a number using do-while loop
    fact = 1;
    num = dublicateNum;
    do{
        fact = fact * num--;
    }while(num);
    cout << "do-while loop: Factorial of a number " << dublicateNum << " is " << fact << endl;

    // factorial of a number using for loop
    fact = 1;
    num = dublicateNum;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    cout << "for-loop: Factorial of a number " << dublicateNum << " is " << fact << endl;

    // Check whether the number is prime or not
    num = dublicateNum;
    int flag = 0;
    for(int i=2; i<= num/2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << num << " is not a prime number" << endl;
    else
        cout << num << " is a prime number" << endl;
    return 0;
}