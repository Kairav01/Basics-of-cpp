#include <iostream>

double calculate(double x, double y, char operation) {
    switch (operation) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0) {
                return x / y;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 0;
            }
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 0;
    }
}
int main() {
    double num1, num2;
    char operation;

    std::cout << "\nSimple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = calculate(num1, num2, operation);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
