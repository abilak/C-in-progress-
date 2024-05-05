#include <iostream> 

int main() { 
     // do while loop = do some code block first, then repeat again if condition is true
     int number;
     do { 
        std::cout << "Enter a positive number \n"; 
        std::cin >> number; 
     }while(number < 0);
     // this is a do while loop. we first "do" the loop once, and then we repeat if the condition is true 
     std::cout << number; 
}