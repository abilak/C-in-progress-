#include <iostream> 

int main() { 
    // ternary operator
    // representation is ?: 
    // replacement to using an if/else statement
    // condition ? expression 1 : expression 2;

    int grade; 
    std::cout << "Enter a number grade: " << '\n'; 
    std::cin >> grade; 

    grade >= 60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n'; // ternary operator

    // this would be the equivalent of 

    /* 
    if(grade >= 60) { 
        std::cout << "You pass!";
    }
    else { 
        std::cout << "You fail!";
    }
    */

   int number = 1589741987598; 

   number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";

   return 0; 

}