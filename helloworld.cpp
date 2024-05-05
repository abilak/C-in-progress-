#include <iostream>


int main() { 
    std::cout << "I like peetsa!" << std::endl; // std:: endl means to end the line, so the next statement starts on a new lione
    std::cout << "It's really good!" << std::endl;

    // alternatively, we could do this for better performance 

    std::cout << "I like peetsa!" << '\n';
    std::cout << "It's really good!" << '\n'; // \n is an escape sequence which means to create a new line
    return 0;
}