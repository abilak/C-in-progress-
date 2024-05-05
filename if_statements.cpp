#include <iostream> 

int  main() { 
    // if statements
    // execute a piece of code only if a certain condition is satisfied

    // for example 
    int age; 
    std::cout << "How old are you?" << '\n';
    std::cin >> age;
    // if statements!!
    if(age >= 18) { 
        std::cout << "You can drink!" << '\n';
    }

    else if(age < 0) { 
        std::cout << "cap" << '\n';
    }
    // else statement pretty mcuh if anything that doesn't work for the if statement
    else { 
        std::cout << "You can't drink! L BOZO!" << '\n';
    }
}