#include <iostream> 
void happyBirthday(std::string name, int age); // most people like to put methods after the main() function
// however, it throws an error, since code is read from top to bottom
// so, we can define it ourselves, but not write anything at the top, and define it at the bottom
// and then call it in the main method
int main() { 
    // a function is a block of reusable code
    std::string name = "Peetsa";
    int age = 21;
    happyBirthday(name, age);
    return 0; 
}

void happyBirthday(std::string name, int age) { // the stuff in the parentheses is what we are passing into the function
// void means we return nothing
// these are the sets of parameters
    std::cout << "Happy Birthday to " << name << "!\n" << "Happy Birthday to " << name << "!\n" << "Happy Birthday dear " << name << "!" << '\n' << "Happy Birthday to " << name << "!\n" << "You are now " << age << " years old!"; 
}