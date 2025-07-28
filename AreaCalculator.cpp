#include <iostream>
#define PI 3.14
int main() {
    int choice;
    double area;
    std::cout << "Area Calculator\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    if (choice == 1) {
        double radius;
        std::cout << "Enter radius of circle: ";
        std::cin >> radius;
        area = PI * radius * radius;
        std::cout << "Area of circle = " << area;
    }
    else if (choice == 2) {
        double length, width;
        std::cout << "Enter length of rectangle: ";
        std::cin >> length;
        std::cout << "Enter width of rectangle: ";
        std::cin >> width;
        area = length * width;
        std::cout << "Area of rectangle = " << area;
    }
    else if (choice == 3) {
        double base, height;
        std::cout << "Enter base of triangle: ";
        std::cin >> base;
        std::cout << "Enter height of triangle: ";
        std::cin >> height;
        area = 0.5 * base * height;
        std::cout << "Area of triangle = " << area;
    }
    else {
        std::cout << "Invalid choice!";
    }
    return 0;
}
