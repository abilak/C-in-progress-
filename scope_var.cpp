#include <iostream> 
int best_num = 9522; // this is a global variable. it is declared outside of 
// all functions, and can be accessed anywhere.

// try not to use global variables cuz they're less secure
void printNum(); 
int main() { 
    // global variables = declared outside of all functions or blocks
    // local variables = declared inside a function or block
    int best_num = 1; // local variable to the function
    std::cout << best_num << '\n';
    std::cout << ::best_num << '\n'; // if we want to use the global version of "best_num", we use the scope resolution operator, which is ::
    printNum(); 
    return 0; 
}

// if I try to access the variable num outside of the main method, then
// i will get an error: 
/*
void printNum() { 
    std::cout << num << '\n';
}
*/

void printNum() { 
    std::cout << best_num << '\n';
}