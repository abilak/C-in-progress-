#include <iostream> 
// typedefs have been replaced with the "using" keyword

using text_t = std::string; // using new_identifier = old_identifier
int main() { 
    text_t name = "Peetsa";
    std::cout << name << '\n';
    return 0; 
}