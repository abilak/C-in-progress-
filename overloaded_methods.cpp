#include <iostream> 
void bakePizza() { 
    std::cout << "Here is your cheese pizza! \n";
}

void bakePizza(std::string a) { 
    std::cout << "Here is your " << a << " pizza! \n";
}

void bakePizza(std::string a, std::string b) { 
    std::cout << "Here is your " << a << " and " << b << " pizza! \n";
}

void bakePizza(std::string a, std::string b, std::string c) {
    std::cout << "Here is your " << a << ", " << b << ", and " << c << " pizza! \n";
}

void bakePizza(std::string a, std::string b, std::string c, std::string d) {
    std::cout << "Here is your " << a << ", " << b << ", " << c << ", and " << d << " pizza! \n";
}

int main() { 
    bakePizza(); 
    bakePizza("jalapeno"); 
    bakePizza("jalapeno", "olive");
    bakePizza("jalapeno", "olive", "banana pepper");
    bakePizza("jalapeno", "olive", "banana pepper", "spinach");
    return 0; 
}