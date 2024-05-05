#include <iostream> 
#include <cmath>
int main() { 
    double leg1; 
    double leg2; 
    std::cout << "Enter leg 1: "; 
    std::cin >> leg1; 

    std::cout << "Enter leg 2: "; 
    std::cin >> leg2;

    double hypotenuse = sqrt(leg1*leg1 + leg2*leg2);

    std::cout << "Given that the two legs of a right triangle are " << leg1 << " and " << leg2 << " the hypotenuse is " << hypotenuse << '.' << '\n';
    return 0;
}