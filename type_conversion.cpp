#include <iostream> 

int main() { 
    // type conversion = a conversion of a value of one data type to another
    // implicit = automatic
    // explicit = precede value with new data type

    int x = 3.14;

    std::cout << x << '\n'; // implicitly converts x to int

    double y = 3.14; 

    std::cout << (int) y << '\n'; // implicitly converts y to int, by typing "(int)"
    return 0; 
}