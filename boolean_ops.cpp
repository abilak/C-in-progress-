#include <iostream> 

int main() { 
    // &&(and): ex1 && ex2 == true if and only if both conditions are true
    // ||(or): ex1 || exx2 == true if and only if at least one condition is true
    // !(not): if ex1 == true, then !ex1 == false. it reverses the truth value of an expression

    int temp; 
    bool sunny = true;

    std::cout << "Enter the temperature(in Fahrenheit): " << '\n'; 

    std::cin >> temp; 

    (temp >= 50 && temp <= 75) ? std::cout << "The perfect temperature!" << '\n' : std::cout << "Temperature is meh." << '\n';

    // we could also have done the same thing with the "or" operator 

    (temp < 50 || temp > 75) ? std::cout << "Temperature is meh." << '\n' : std::cout << "Temperature is perfect!" << '\n';

    (!sunny) ? std::cout << "Boring..." : std::cout << "Noice!";

    return 0; 
}