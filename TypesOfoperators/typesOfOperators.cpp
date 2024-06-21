#include <iostream>

int main(){
    // Arithmatic operators: +,-,*,/,%
    int a, b;
    std::cout << "Enter the first number:" << std::endl;
    std::cin >> a;

    std::cout << "Enter the second number:" << std::endl;
    std::cin >> b;
    std::cout << "**************Arithmatic operators**************" << std::endl;
    std::cout << "Sum=" << a+b << std::endl;
    std::cout << "Substraction=" << a-b << std::endl;
    std::cout << "multiplication=" << a*b << std::endl;
    if(b == 0){
        std::cout << "Devision and Modulus cannot be performed\n" << std::endl;
    }
    else{
        std::cout << "Devision=" << a/b << std::endl;
        std::cout << "modulus=" << a%b << std::endl;
    }
    // Relational operators: >,<,>=,<=,!=,==
    std::cout << "**************Relational operators**************" << std::endl;
    if(a > b)
        std::cout << a << " is greater" << std::endl;
    else if(b > a)
        std::cout << b << " is greater" << std::endl;
    else
        std::cout << a << " is equal to " << b << std::endl;

    // Inrement and decrement operators: ++,--
    std::cout << "**************Inrement and decrement operators**************" << std::endl;
    std::cout << "value of a = " << a << std::endl;
    std::cout << "Preincrement = " << ++a << std::endl;
    std::cout << "value of a = " << a << std::endl;
    std::cout << "Postincrement = " << a++ << std::endl;
    std::cout << "value of a = " << a << std::endl;
    std::cout << "Predecrement = " << --a << std::endl;
    std::cout << "value of a = " << a << std::endl;
    std::cout << "Postdeccrement = " << a-- << std::endl;
    std::cout << "value of a = " << a << std::endl;
    return 0;
}