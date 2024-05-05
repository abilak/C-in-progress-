#include <iostream> 

int main() { 
    char unit; 
    double temperature;
    std::cout << "F or f = Fahrenheit \n"; 
    std::cout << "C or c = celsius \n"; 
    std::cin >> unit; 

    std::cout << "Enter a temperature: ";
    std::cin >> std::ws >> temperature;
    if(unit == 'F' || unit == 'f') { 
        std::cout << (temperature-(double)32)/(1.8);
    }

    else if(unit == 'C' || unit == 'c') { 
        std::cout << (temperature*1.8)+(double)32;
    }

    else { 
        std::cout << "Please enter a valid unit: F/f for Fahrenheit, and C/c for Celsius."; 
    }
    return 0; 
}