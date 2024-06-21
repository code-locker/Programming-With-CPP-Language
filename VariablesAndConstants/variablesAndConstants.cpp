#include <iostream>

int main(){
    const float PT = 3.14;
    float area = 0, rad;
    std::cout << "Enter the radius of the circle." << std::endl;
    std::cin >> rad;
    area = PT * rad * rad; 
    std::cout << "Area of the circle is " << area << std::endl;
    return 0;
}