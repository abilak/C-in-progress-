#include <iostream> 

int main() { 
    // switch = alterantive to if statements

    int month; 
    std::cout << "Enter a number between 1 and 12 to represent a month: " << '\n'; 

    std::cin >> month; 

    // instead of typing 12 different if-statements, we can use a switch to make the process easier and more organized

    switch(month) { // we have (month) as that is the value we are testing
        case 1: // case 1 means that month == 1
            std::cout << "It is January";
            break;
        case 2: 
            std::cout << "It is February";
            break;
        case 3: 
            std::cout << "It is March";
            break;
        case 4: 
            std::cout << "It is April";
            break;
        case 5: 
            std::cout << "It is May";
            break;
        case 6: 
            std::cout << "It is June";
            break; 
        case 7: 
            std::cout << "It is July";
            break; 
        case 8: 
            std::cout << "It is August";
            break; 
        case 9: 
            std::cout << "It is September";
            break; 
        case 10: 
            std::cout << "It is October";
            break; 
        case 11: 
            std::cout << "It is November";
            break; 
        case 12: 
            std::cout << "It is December";
            break; 
        default: 
            std::cout << "Please enter numbers from [1,12]";
    }
    return 0; 
}