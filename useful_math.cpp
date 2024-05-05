#include <iostream> 
#include <cmath>

int main() { 
    double x = 3; 
    double y = 4; 
    double z; 
    z = std::max(x, y); // gedts the max
    std::cout << z << '\n';

    double a = std::min(x,y);
    std::cout << a << '\n';

    // the rest of the functions use the cmath header file

    double b; 

    b = pow(2,3);
    double c = sqrt(9); 
    double d = abs(-5); // absolute value |-5| = 5
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';

    double j = 3.75;

    double k = 3.75;

    double l = 7.3;

    j = round(j); // will give 4

    k =  ceil(j); // ceiling function

    l = floor(l); // floor function of l

    std::cout << j << '\n';
    std::cout << k << '\n';
    std::cout << l << '\n';
    return 0; 
}