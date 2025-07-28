#include <iostream>

int main() {
    int number;
    bool isPrime = true;
    
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    
    if (number < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number/2; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        std::cout << number << " is a prime number";
    } else {
        std::cout << number << " is not a prime number";
    }
    
    return 0;
}