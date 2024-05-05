#include <iostream> 

int main() { 
    for(int i = 1; i <= 5; i++) { // first part: initialize the starting the value. second part: keep looping until the condition is met
    // third part: how much we increment/decrement the index value each loop
    // (each iteration should get us closer and closer to the end/the objective of meeting the second part's condition)
        std::cout << "HAPPY NEW YEAR! \n";
    }

    // repeats the code 5 times


    std::cout << "******************************** \n";
    for(int i = 10; i >= 1; i--) { 
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!" << '\n';

    // we can skip by 2 as well
    for(int i = 10; i >= 1; i-=2) { 
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!" << '\n';
    return 0; 
}