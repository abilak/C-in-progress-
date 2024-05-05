#include <iostream> 

int main() { 
    int num1; 
    char operation; 
    int num2; 

    std::cout << "Enter in a number: "; 
    std::cin >> num1; 

    std::cout << "Enter in an operation: "; 
    std::cin >> std::ws >> operation; 

    std::cout << "Enter in another number: "; 
    std::cin >> num2; 

    switch(operation) { 
        case '+': 
            std::cout << num1+num2 << '\n';
            break;
        case '-': 
            std::cout << num1-num2 << '\n';
            break;
        case '*': 
            std::cout << num1*num2 << '\n';
            break;
        case '/': 
            std::cout << num1/num2 << '\n';
            break;
        default: 
            std::cout << "Please enter a valid operation" << '\n';
    }
    return 0; 
}