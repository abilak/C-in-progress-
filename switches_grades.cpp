#include <iostream> 

int main() { 
    char grade; 
    std::cout << "Enter in your LETTER grade" << '\n'; 
    std::cin >> grade; 
    switch(grade) { 
        case 'A': 
            std::cout << "Great job!";
            break; 
        case 'B': 
            std::cout << "Good job!"; 
            break;
        case 'C': 
            std::cout << "Decent job.";
            break;
        case 'D': 
            std::cout << "Bad job!";
            break;
        case 'F': 
            std::cout << "Terrible job!";
            break;
        default: 
            std::cout << "Please enter the following letter grades: A, B, C, D, F";
    }
}