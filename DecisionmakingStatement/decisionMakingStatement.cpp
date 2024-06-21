#include <iostream>

using namespace std;

int main(){
    // if statement
    // convert number into positive number if the number is negetive and display
    int num;
    cout << "Enter +/- integer number:" << endl;
    cin >> num;
    if(num < 0){
        num = -num;
    }
    cout << "Number = " << num << endl;

    // if..else statement
    // Eligible to vote or not based on age
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if(age >= 18){
        cout << "You are eligible to vote!!!" << endl;
    }
    else{
        cout << "!!!You are not eligible to vote!!!" << endl;
    }

    // if..else ladder
    // display grade of the student based on percentage of score
    float percentage;
    string grade;
    cout << "Enter the percentage of score:" << endl;
    cin >> percentage;
    if(percentage > 100){
        cout << "Invalid percentage of score entered." << endl;
        return 0;
    }
    else if(percentage >= 90)
        grade = "A+";
    else if(percentage >= 80)
        grade = "A";
    else if(percentage >= 70)
        grade = "B+";
    else if(percentage >= 60)
        grade = "B";
    else if(percentage >= 50)
        grade = "C+";
    else if(percentage >= 35)
        grade = "C";
    else
        grade = "F";
    cout << "Your grade is " << grade << endl;

    //Nested if statement
    //If numbers are not equal, print greatest of two numbers
    int num1, num2;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;
    if(num1 != num2){
        if(num1 > num2){
            cout << num1 << " is greater" << endl;
        }
        else{
            cout << num2 << " is greater" << endl;
        }
    }
    else{
        cout << "Entered numbers are equal" << endl;
    }

    // switch statement
    char arithmeticOperator;
    int operand1, operand2;
    cout << "Enter the Arithmatic operator(+,-,/,*,%):" << endl;
    cin >> arithmeticOperator;
    cout << "Enter the operands:" << endl;
    cin >> operand1 >> operand2;
    switch(arithmeticOperator){
        case '+':
            cout << operand1 << "+" << operand2 << "=" << operand1+operand2 << endl;
            break;
        case '-':
            cout << operand1 << "-" << operand2 << "=" << operand1-operand2 << endl;
            break;
        case '*':
            cout << operand1 << "*" << operand2 << "=" << operand1*operand2 << endl;
            break;
        case '/':
            if(operand2 != 0)
                cout << operand1 << "/" << operand2 << "=" << operand1/operand2 << endl;
            else
                cout << "/ cannot be performed." << endl;
            break;
        case '%':
            if(operand2 != 0)
                cout << operand1 << "%" << operand2 << "=" << operand1%operand2 << endl;
            else
                cout << "% cannot be performed." << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}