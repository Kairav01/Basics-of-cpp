#include <iostream>
#include <cmath>

int main() {
    double number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (number >= 0) {
        double result = sqrt(number);
        std::cout << "Square root of " << number << " = " << result << std::endl;
    } else {
        std::cout << "Error: Cannot calculate square root of a negative number" << std::endl;
    }
    
    return 0;
}