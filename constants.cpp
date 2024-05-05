#include <iostream> 

int main() { 
    double pi = 3.14159265358979323846;
    double radius = 10.0; 
    double circumference = 2 * pi * radius; 

    std::cout << circumference << " cm" << '\n';

    // however, what if someone went into our program and changed the value of pi? this would give a different and inaccurate result

    // therefore, we can use the "const" --> this prefix makes a variable not able to be changed

    const double PI = 3.14159265358979323846; // it is a naming convention to make "const"s all caps 
    double radius2 = 10.0; 
    double circumference2 = 2 * PI * radius;

    std::cout << circumference2 << " cm" << '\n';

    // if we try to change PI to like 2.71, then it will throw an error

    // other examples of constants

    const int LIGHT_SPEED = 299792458;
    const double e = 2.718281828459045;
    // we should use constants as often as possible, unless yk that the variable will be changed
    return 0;
}