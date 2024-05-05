#include <iostream> 

int main() { 
    std::string name; 
    std::cout << "Enter your name. \n";
    std::getline(std::cin, name);
    while(name.empty()) { 
        std::cout<< "Enter your name again: ";
        std::getline(std::cin, name);
    }

    // a while loop basically is a loop that could go on for an infinite amount of time, unless the 
    // condition that is specified in the parentheses is no longer satisfied

    std::cout << "Hello " << name;
}