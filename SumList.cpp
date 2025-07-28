#include <iostream>

int main() {
    int count, sum = 0;
    
    std::cout << "How many numbers do you want to add? ";
    std::cin >> count;
    
    int numbers[count];
    
    for(int i = 0; i < count; i++) {
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }
    
    std::cout << "\nSum expression: ";
    for(int i = 0; i < count; i++) {
        std::cout << numbers[i];
        if(i < count - 1) {
            std::cout << " + ";
        }
    }
    
    std::cout << " = " << sum << std::endl;
    
    return 0;
}
