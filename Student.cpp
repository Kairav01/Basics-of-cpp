#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float marks;

public:
    void setData() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);
        
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        
        std::cout << "Enter marks: ";
        std::cin >> marks;
    }
    
    void displayData() {
        std::cout << "\nStudent Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    Student student1;    // Creating object of Student class
    
    std::cout << "Enter details for student:" << std::endl;
    student1.setData();  // Calling member function
    
    student1.displayData();  // Displaying student information
    
    return 0;
}
